# arduino-teleinfo

Lecture de la téléinfo d'un compteur ERDF avec un Arduino.

### License

Aucune. Faites en ce que vous voulez.

### Contexte

Les données de consommation d'un compteur électrique électronique ERDF peuvent être récupérées assez simplement à l'aide d'un Arduino et de quelques composants. Les données sont récupérées à l'aide du système de téléinfo, présent sur la plupart des compteurs récents.

### Principe de fonctionnement

Deux méthodes sont possibles :
- Lire et afficher directement le flux de données sur l'ordinateur (décrit ci-dessous),
- Lire et stocker ces données sur une carte SD (à faire).

La méthode de la lecture directe, la plus simple, permet uniquement de vérifier que la téléinfo fonctionne correctement, et de vérifier la réception des données.

### Matériel et montage

La matériel suivant est nécessaire :
- Arduino Uno, avec câble USB et alimentation
- Opto-coupleur SFH620A-2
- Résistance d'environ 1,5 kOhm

Connecter les composants comme suit :
- Le pin 4 de l'optocoupleur à l'entrée numérique D2 de l'Arduino
- Le pin 3 à un pin GND de l'Arduino
- Le pin 2 de l'optocoupleur à un des fils I1 ou I2 du compteur
- Le pin 1 à la résistance puis au fil I1 ou I2 restant
- Les fils I1 et I2 sont normalement accessibles et visibles sur le compteur ERDF.

### Code source

Le code joint dans le fichier teleinfo.ino est à envoyer sur l'Arduino pour afficher les données envoyées par la téléinfo.

### Exemple de relevé

Si le système fonctionne, des informations comme celles ci-dessous doivent s'afficher dans le terminal Arduino :

ADCO 031128049974 G
OPTARIF HC.. <
ISOUSC 45 ?
HCHC 008563072 %
HCHP 010010179 &
PTEC HP..  
IINST 002 Y
IMAX 045 H
PAPP 00410 &
HHPHC C .
MOTDETAT 000000 B

Les données peuvent être interprétées à l'aide de la documentation d'EDF. PAr exemple :
- Les heures pleines sont en cours (PTEC),
- La puissance consommée est de 410 VA (PAPP).

Si rien de particulier ne s'affiche, il se peut que la téléinfo ne soit pas activée sur le compteur.

### Références

Les références suivantes m'ont aidé à réaliser ce qui suit :
- Le [post](http://blog.cquad.eu/2012/02/02/recuperer-la-teleinformation-avec-un-arduino/) du blog de C-quad,
- L'[atelier](http://www.mon-club-elec.fr/pmwiki_mon_club_elec/pmwiki.php?n=MAIN.ArduinoExpertTeleinfoTestSimpleLectureTrame) de mon-club-elec.fr,
- Les [explications](http://www.planet-libre.org/index.php?post_id=11810) de Planet Libre.

De nombreux autres sites proposent des explications similaires, plus ou moins détaillées

### Contact

Robin Roche - robinroche.com
