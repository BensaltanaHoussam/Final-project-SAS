#include <stdio.h>
#include <stdlib.h>
#include <string.h>


const char math[] = "Mathematiques", physic[] = "Physique", informatique[] = "Informatique";

typedef struct {
    int jour, mois, annee;
} dateNaissance;

typedef struct {
    int id;
    char nom[25], prenom[25];
    dateNaissance date_naissance;
    float note_general;
    char departement[30];
} Etudiant;

Etudiant etudiants[100];
int nbr_etudiants = 0;

void data() {

    etudiants[0].id = 1;
    strcpy(etudiants[0].nom, "rabiaa");
    strcpy(etudiants[0].prenom, "younes");
    etudiants[0].date_naissance.jour = 10;
    etudiants[0].date_naissance.mois = 9;
    etudiants[0].date_naissance.annee = 2005;
    strcpy(etudiants[0].departement, "Mathematiques");
    etudiants[0].note_general = 18;

    etudiants[1].id = 2;
    strcpy(etudiants[1].nom, "kamili");
    strcpy(etudiants[1].prenom, "merwan");
    etudiants[1].date_naissance.jour = 15;
    etudiants[1].date_naissance.mois = 1;
    etudiants[1].date_naissance.annee = 2006;
    strcpy(etudiants[1].departement, "Mathematiques");
    etudiants[1].note_general = 10;

    etudiants[2].id = 3;
    strcpy(etudiants[2].nom, "rahimi");
    strcpy(etudiants[2].prenom, "jawad");
    etudiants[2].date_naissance.jour = 26;
    etudiants[2].date_naissance.mois = 7;
    etudiants[2].date_naissance.annee = 2004;
    strcpy(etudiants[2].departement, "Mathematiques");
    etudiants[2].note_general = 7;

    etudiants[3].id = 4;
    strcpy(etudiants[3].nom, "kabo");
    strcpy(etudiants[3].prenom, "hamza");
    etudiants[3].date_naissance.jour = 1;
    etudiants[3].date_naissance.mois = 12;
    etudiants[3].date_naissance.annee = 2005;
    strcpy(etudiants[3].departement, "Mathematiques");
    etudiants[3].note_general = 13;

    etudiants[4].id = 5;
    strcpy(etudiants[4].nom, "dawdi");
    strcpy(etudiants[4].prenom, "kamal");
    etudiants[4].date_naissance.jour = 12;
    etudiants[4].date_naissance.mois = 9;
    etudiants[4].date_naissance.annee = 2005;
    strcpy(etudiants[4].departement, "Physique");
    etudiants[4].note_general = 7;

    etudiants[5].id = 6;
    strcpy(etudiants[5].nom, "sbati");
    strcpy(etudiants[5].prenom, "rayan");
    etudiants[5].date_naissance.jour = 29;
    etudiants[5].date_naissance.mois = 10;
    etudiants[5].date_naissance.annee = 2005;
    strcpy(etudiants[5].departement, "Physique");
    etudiants[5].note_general = 9;

    etudiants[6].id = 7;
    strcpy(etudiants[6].nom, "kamili");
    strcpy(etudiants[6].prenom, "khadija");
    etudiants[6].date_naissance.jour = 10;
    etudiants[6].date_naissance.mois = 1;
    etudiants[6].date_naissance.annee = 2006;
    strcpy(etudiants[6].departement, "Physique");
    etudiants[6].note_general = 19;

    etudiants[7].id = 8;
    strcpy(etudiants[7].nom, "ahmed");
    strcpy(etudiants[7].prenom, "ahmed");
    etudiants[7].date_naissance.jour = 26;
    etudiants[7].date_naissance.mois = 7;
    etudiants[7].date_naissance.annee = 2004;
    strcpy(etudiants[7].departement, "Physique");
    etudiants[7].note_general = 15;

    etudiants[8].id = 9;
    strcpy(etudiants[8].nom, "romani");
    strcpy(etudiants[8].prenom, "hiba");
    etudiants[8].date_naissance.jour = 1;
    etudiants[8].date_naissance.mois = 12;
    etudiants[8].date_naissance.annee = 2006;
    strcpy(etudiants[8].departement, "Informatique");
    etudiants[8].note_general = 10;

    etudiants[9].id = 10;
    strcpy(etudiants[9].nom, "jabiir");
    strcpy(etudiants[9].prenom, "saad");
    etudiants[9].date_naissance.jour = 13;
    etudiants[9].date_naissance.mois = 1;
    etudiants[9].date_naissance.annee = 2006;
    strcpy(etudiants[9].departement, "Informatique");
    etudiants[9].note_general = 11;






    nbr_etudiants = 10;
}

void ajouterEtudiant() {


    if (nbr_etudiants < 100) {


        int index = nbr_etudiants;
        etudiants[index].id = nbr_etudiants;





        printf("*******************\n");
        printf("ID: %d \n", etudiants[index].id);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[index].nom);

        printf("Prenom : ");
        scanf(" %[^\n]", etudiants[index].prenom);

            printf("Date de naissance (jj mm aaaa) : \n");
            scanf("%d %d %d", &etudiants[index].date_naissance.jour,
                            &etudiants[index].date_naissance.mois,
                            &etudiants[index].date_naissance.annee);

        int departementChoix;
        printf("Departement (1.Mathematiques / 2. Physique / 3. Informatique): ");
        scanf("%d", &departementChoix);

        switch (departementChoix) {
            case 1:
                strcpy(etudiants[index].departement, math);
                break;
            case 2:
                strcpy(etudiants[index].departement, physic);
                break;
            case 3:
                strcpy(etudiants[index].departement, informatique);
                break;
            default:
                printf("Choix de departement invalide.\n");
                strcpy(etudiants[index].departement, math);
                break;
        }




        printf("note generale : ");
        scanf("%f", &etudiants[index].note_general);


        printf("Etudiant a ete ajouter !\n");
    } else {
        printf("La liste est pleine !!\n");
    }
}

void modifierEtudiant() {
    printf("\n** Modifier les informations des etudiants **\n");

    int id;
    printf("Entrez ID de l'etudiant : ");
    scanf("%d", &id);

    for (int i = 0; i < nbr_etudiants; i++) {
        if (etudiants[i].id == id) {
            printf("Modifier les informations de letudiant %d\n", id);

            printf("Nom (%s) : ", etudiants[i].nom);
            scanf(" %[^\n]", etudiants[i].nom);

            printf("Prenom (%s) : ", etudiants[i].prenom);
            scanf(" %[^\n]", etudiants[i].prenom);

                printf("Date de naissance (jj mm aaaa) : \n");
                scanf("%d %d %d", &etudiants[i].date_naissance.jour,
                                &etudiants[i].date_naissance.mois,
                                &etudiants[i].date_naissance.annee);

            int departementChoix;
            printf("Departement (1. Mathematiques / 2. Physique / 3. Informatique): ");
            scanf("%d", &departementChoix);

            switch (departementChoix) {
                case 1:
                    strcpy(etudiants[i].departement, math);
                    break;
                case 2:
                    strcpy(etudiants[i].departement, physic);
                    break;
                case 3:
                    strcpy(etudiants[i].departement, informatique);
                    break;
                default:
                    printf("Choix invalide.\n");
                    break;
            }

            printf("La note generale (%.2f) : ", etudiants[i].note_general);
            scanf("%f", &etudiants[i].note_general);

            printf("Etudiant modifie avec succes.\n");
            return;
        }
    }

    printf("Etudiant avec ID %d non trouve.\n", id);
}

void supprimerEtudiant() {
    printf("\n************SUPPRIMER UN ETUDIANT************\n");

    int id;
    printf("Entrez ID de etudiant a supprimer : ");
    scanf("%d", &id);

    for (int i = 0; i < nbr_etudiants; i++) {
        if (etudiants[i].id == id) {
            for (int j = i; j < nbr_etudiants - 1; j++) {
                etudiants[j] = etudiants[j+1];
            }
            nbr_etudiants--;
            printf("Etudiant %d a ete supprime.\n", id);
            return;
        }
    }
    printf("Etudiant avec ID %d non trouve.\n", id);
}

void afficherEtudiant() {
    printf("\n** AFFICHER UN ETUDIANT **\n");

    int id;
    printf("Entrez le ID de letudiant pour afficher les details : ");
    scanf("%d", &id);

    for (int i = 0; i < nbr_etudiants; i++) {
        if (etudiants[i].id == id) {
            printf("\n--- Details de letudiant ---\n");
            printf("ID: %d\n", etudiants[i].id);
            printf("Nom: %s\n", etudiants[i].nom);
            printf("Prenom: %s\n", etudiants[i].prenom);
            printf("Date de naissance: %02d/%02d/%04d\n", etudiants[i].date_naissance.jour, etudiants[i].date_naissance.mois, etudiants[i].date_naissance.annee);
            printf("Departement: %s\n", etudiants[i].departement);
            printf("Note generale: %.2f \n", etudiants[i].note_general);
            printf("------------------------------\n");
            return;
        }
    }
    printf("Etudiant avec ID %d non trouve.\n", id);
}

void calculerMoyenneDepartement() {
    int   departementChoix;
 float somme_notes = 0;
    int nb_etudiants_departement = 0;
    char departement[30];

      printf("Choisissez le departement pour calculer la moyenne :\n");
      printf("1. Mathematiques\n");
    printf("2. Physique\n");
    printf("3. Informatique\n");
    printf("Votre choix: ");
    scanf("%d", &departementChoix);

    
    switch (departementChoix) {
           case 1:
      strcpy(departement, "Mathematiques");
            break;
           case 2:
          strcpy(departement, "Physique");
            break;
           case 3:
         strcpy(departement, "Informatique");
            break;
        default:
            printf("Choix invalide.\n");
            return; 
    }

     for (int i = 0; i < nbr_etudiants; i++) {
        if (strcmp(etudiants[i].departement, departement) == 0) {
            somme_notes += etudiants[i].note_general;
            nb_etudiants_departement++;
        }
    }

     if (nb_etudiants_departement > 0) {
        float moyenne = somme_notes / nb_etudiants_departement;
        printf("La moyenne des notes pour le departement %s est : %.2f\n", departement, moyenne);
    } else {
        printf("no etudiant dans le departement %s.\n", departement);
    }
}


void afficherTousLesEtudiants() {
    printf("\n** LISTE DES ETUDIANTS **\n");

    for (int i = 0; i < nbr_etudiants; i++) {
        printf("\n--- Etudiant %d ---\n", i + 1);
        printf("ID: %d\n", etudiants[i].id);
        printf("Nom: %s\n", etudiants[i].nom);
        printf("Prenom: %s\n", etudiants[i].prenom);
        printf("Date de naissance: %02d/%02d/%04d\n", etudiants[i].date_naissance.jour, etudiants[i].date_naissance.mois, etudiants[i].date_naissance.annee);
        printf("Departement: %s\n", etudiants[i].departement);
        printf("Note generale: %.2f\n", etudiants[i].note_general);
        printf("----------------------------\n");
    }
}


void afficherStatistiques() {
    printf("\n**** Statistiques ****\n");

    int choixStat;
      printf("les statistiques afficher : \n");
      printf("1. Nombre total de letudiants inscrits\n");
     printf("2. Nombre total de letudiants par departement\n");
    printf("3. Etudiants avec une note superieure a un seuil\n");
    printf("4. Les 3 meilleurs etudiants\n");
    printf("5. Nombre d'etudiants reussis\n");
    scanf("%d", &choixStat);

    switch (choixStat) {


     case 1: {
            printf("nombre total d etudiants inscrits : %d \n",nbr_etudiants);
            break;
            }

     case 2: {
            int mathCount = 0, physCount = 0, infoCount = 0;
            for (int i = 0; i < nbr_etudiants; i++) {
                if (strcmp(etudiants[i].departement, math) == 0) mathCount++;
                else if (strcmp(etudiants[i].departement, physic) == 0) physCount++;
                else if (strcmp(etudiants[i].departement, informatique) == 0) infoCount++;
            }
        printf("Nombre total de etudiants par departement:\n");
        printf("Mathematiques: %d etudiants\n", mathCount);
        printf("Physique: %d etudiants\n", physCount);            printf("Informatique: %d etudiants\n", infoCount);
            break;
        }

        case 3: {
            float seuil;
            printf("Entrez un seuil de note generale: ");
            scanf("%f", &seuil);
            printf("Etudiants avec une note superieure a %.2f:\n", seuil);
            for (int i = 0; i < nbr_etudiants; i++) {
                if (etudiants[i].note_general > seuil) {
                    printf("%s %s (%.2f)\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].note_general);
                }
            }
            break;
        }

        case 4: {
            printf("Les 3 meilleurs etudiant:\n");
            for (int i = 0; i < nbr_etudiants && i < 3; i++) {
                printf("%s %s (%.2f)\n", etudiants[i].nom, etudiants[i].prenom, etudiants[i].note_general);
            }
            break;
        }

        case 5: {
            int nbr_reussis = 0;
            for (int i = 0; i < nbr_etudiants; i++) {
                if (etudiants[i].note_general >= 10.0) {
                    nbr_reussis++;
                }
            }
            printf("Nombre d'etudiants reussis: %d\n", nbr_reussis);
            break;
        }

        default:
            printf("Choix invalide.\n");
            break;
    }
}



void rechercherEtudiantParNom() {
    printf("\n**** RECHERCHER UN ETUDIANT PAR NOM ****\n");

    char nomRecherche[25];
    printf("Entrez le nom de l'etudiant a rechercher : ");
    scanf(" %[^\n]", nomRecherche);

    int found = 0;
    for (int i = 0; i < nbr_etudiants; i++) {
        if (strcmp(etudiants[i].nom, nomRecherche) == 0) {
            printf("\n--- Details de l'etudiant ---\n");
            printf("ID: %d\n", etudiants[i].id);
            printf("Nom: %s\n", etudiants[i].nom);
            printf("Prenom: %s\n", etudiants[i].prenom);
            printf("Date de naissance: %02d/%02d/%04d\n", etudiants[i].date_naissance.jour, etudiants[i].date_naissance.mois, etudiants[i].date_naissance.annee);
            printf("Departement: %s\n", etudiants[i].departement);
            printf("Note generale: %.2f\n", etudiants[i].note_general);
            printf("------------------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Etudiant avec le nom '%s' non trouve.\n", nomRecherche);
    }
}









int main() {
    int choix;
    data();

    do {
        printf("\n** Menu Principal **\n");
        printf("1. Ajouter un etudiant\n");
        printf("2. Modifier un etudiant\n");
        printf("3. Supprimer un etudiant\n");
        printf("4. Afficher les details d'un etudiant\n");
        printf("5. Calculer la moyenne des notes pour un departement\n");
        printf("6. Afficher tous les etudiants\n");
          printf("7. Afficher les statistiques\n");
            printf("6. Rechercher un etudiant par nom\n");
        printf("8. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterEtudiant();
                break;
            case 2:
                modifierEtudiant();
                break;
            case 3:
                supprimerEtudiant();
                break;
            case 4:
                afficherEtudiant();
                break;
            case 5:
                calculerMoyenneDepartement();
                break;
            case 6:
                afficherTousLesEtudiants();
                break;
            case 7:
             afficherStatistiques();
                break;

                case 8:
                rechercherEtudiantParNom();
                break;

                      case 9:
                printf("Quitter le programme...\n");
                break;
            default:
                printf("Choix invalide, essayez encore.\n");
                break;
        }
    } while (choix != 9);

    return 0;
}
