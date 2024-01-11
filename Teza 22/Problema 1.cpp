#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char propozitie[] = "Firma implementeaza proiecte de desing interior proiecte de consolidare si proiecte de amenajari";
    char cuvant[] = "proiecte";
    cout << propozitie << endl << cuvant << endl;

    char aux[500];
    aux[0] = '\0';  // Initialize aux to an empty string

    char *p = strtok(propozitie, " ");
    while (p)
    {
        if (strcmp(cuvant, p) || !strchr("aeiou", p[0]))
            strcat(aux, p);

        strcat(aux, " ");
        p = strtok(NULL, " ");
    }

    strcpy(propozitie, aux);
    cout << propozitie;

    return 0;
}
