//
// Created by Steph on 28/12/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

int main(void)
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.example.com/page-web");
        res = curl_easy_perform(curl); //res est une variable de type CURLcode qui stocke le résultat de l'opération cURL.
        if(res != CURLE_OK) {
            fprintf(stderr, "Erreur lors de la récupération de la page web : %s\n",
                    curl_easy_strerror(res));
        }
        curl_easy_cleanup(curl);
    }


// Récupération de l'information souhaitée à partir de la page web

// Connexion à la base de données

// Préparation de la requête SQL pour insérer l'information dans la base de données

// Exécution de la requête

// Nettoyage et fermeture de la connexion à la base de données

    return 0;
}
