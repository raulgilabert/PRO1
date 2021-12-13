struct Provincia {
    string nombre;
    string capital;
    int habitantes;
    int area;
    double pib;
};

struct Pais {
    string nombre;
    string capital;
    vector<Provincia> provs;
};

typedef vector<Pais> Paises;


// Pre:
//      ---
//
// Post:
//      Devuelve la suma de los pib de todas las provincias con densidad
//      estríctamente superior a d de todos los países en p cuyo nombre empieza
//      con la letra c
double pib(const Paises& p, char c, double d) {
    int psize = p.size(), pibsuma = 0;
    // Mira los países
    for (int i = 0; i < psize; ++i) {
        // Si la letra inicial del país es c
        if (p[i].nombre[0] == c) {
            int paisSize = p[i].provs.size();

            // Mira las provincias
            for (int j = 0; j < paisSize; ++j) {
                double densidad = p[i].provs[j].habitantes/double(p[i].provs[j]
                        .area);

                // Comprobación de densidad
                if (densidad > d)
                    pibsuma += p[i].provs[j].pib;
            }
        }
    }

    return pibsuma;
}