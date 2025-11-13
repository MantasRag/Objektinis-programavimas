# Objektinis programavimas

## 1. Visų versijų aprašai

## 2. Programos naudojimosi instrukcija
### Pirmas žingsnis: Skaičiavimo metodo pasirinkimas.
Pačiame pirmame etape (paleidus programą) varototjo yra klausiama kokią skaičiavimo sistemą naudoti:
- Vidurkis
- Mediana
- Vidurkis ir mediana
Išvedant studentų rezultataus į ekraną terminale arba kuriant .txt failus studentų galutinį įvertinimą rodis apskaičiuotą pagal vidurkį, medianą arba abu (kaip du atskiri komponentai).

### Antras žingsnis: Menu
Programoje vartotojas gali rinktis tarp 6 funkcionalumų:
1. Įvesti studentų rezultatus rankiniu būdu.
2. Įvesti studentų rezultatus iš .txt failo.
3. Studentų rezultatus generuoti atsitiktinius.
4. Generuoti testavimo failus (5 failai).
5. Testuoti konteinerius (vector ir list).
6. Išeiti iš programos.

#### 1. Įvesti studentų rezultatus rankiniu būdu.
* Pasirinkus šį atvejį, varotojo klausiama į kokį konteinerį turi būti įrašomi studentų duomenys (vector ar list).
* Toliau vartotojas pasirenka kiek studentų yra grupėje (kiek studentų jis norės įvesti) - įveda skaičių.
* Vykdomas studentų duomenų įvedimas: įvedamas vardas, spaudžiama enter; įvedama pavardė, spaudžiama enter; įvedami studento pažymiai (1-10) - kaskart spausti enter, dvigubas enter nurodo, kad studentų pažymiai baigti įvesti; įvedamas studento egzamino pažymys (1-10), spaudžiama enter; kartojama su visais studentais; galutiniame etape terminalo lange išspauzdinami studentai ir jų galutiniai įvertinimai.
* Vartotojo klausiama ar jis nori testi darbą su programa, jo paisirinkimai: t - vartotojas perkeliamas į menu, n - programa baigiama.

#### 2. Įvesti studentų rezultatus iš .txt failo.
* Pasirinkus šį atvejį, automatiškai nuskaitomas pasirinktas .txt failas.
* Iš jo gauti duomenys apskaičiuojami ir išpostinami į terminalą taip pat kaip ir menu 1 atveju.
* Vartotojo klausiama ar jis nori testi darbą su programa, jo paisirinkimai: t - vartotojas perkeliamas į menu, n - programa baigiama.

#### 3. Studentų rezultatus generuoti atsitiktinius.
* Tai studentų duomenų generavimo priemonė.
* Pasirinkus šį atvejį, varototojo klausiama kiek studentų generuoti (vartotojas įveda bet kokį teigiamą skaičių, spaudžia enter).
* Vartotojo klausiama po kiek pažymių generuoti kiekvienam studentui (varottojas įveda bet kokį teigiamą skaičių, spaudžia enter).
* Į terminalą išvedami visi studentai (jų vardai ir pavardės) ir jų galutiniai įvertinimai.
* * Vartotojo klausiama ar jis nori testi darbą su programa, jo paisirinkimai: t - vartotojas perkeliamas į menu, n - programa baigiama.

#### 4. Generuoti testavimo failus (5 failai).
* Ši dalis skirta generuoti .txt failus, kurie gali būti naudojami testavimams (ši dalis neapskaičiuoja studentų galutinių įvertinimų).
* Pasirinkus šį atvejį, vartotojo klausiama po kiek pažymių generuoti kiekvienam studentui (varotojas įveda bet kokį teigiamą skaičių ir spaudžia enter), egzamino įvertinimas sugeneruojamas be varotojo įsikišimo.
* Į ekraną išvedami sukurtų failų pavadinimai, po kiek studentų juose yra ir po kiek pažymių turi kiekvienas studentas.
* Taip pat terminale rodoma ir generavimo spaortos analizė kiekvienam vailui (kiek laiko užtrunka vieno studento duomenų generavimas (bendras laikas padalintas iš studentų skaičiaus)).
* Visi failai bus randami Studentai_v1\Build aplanke.

#### 5. Testuoti konteinerius (vector ir list).
* Ši dalis skirta duomenų iš tekstinių failų apdorojimui, studentų skirstymui į gerus ir blogus, programos startegijų, bei konteinerių testavimas.
* Pasirinkus šį atvejį, vartotojo klausiama kokį konteinerį naudoti studentų duomenims: 1 - vektorius, 2 - sąrašas, 3 - vektorius ir sąrašas.
* Toliau vartotojas turi pasirinkti iš trijų strategijų (1. Copy+paste - studentų duomenys kopijuojami iš pagrindinio vektoriaus/list į du naujus; 2. Cut+paste - studentų, kurių galutiniai įvertinimai žemesni nei 5 iškerpami iš pagrindinio vektoriaus/list ir įkeliami į naują; 3. Optimizuota (sparčiausia) strategija - vektoriams tai lyg paspartinta 1 startegija, sąrašasms - antra strategija).
* Programa sukuria du .txt failus (Daugiaulygu5.txt ir Maziau5.txt). Ten yra tinkamai į dvi grupes suskirstyti studentai.
* Ekrane išvedami duomenys: kiek studentų su <5, >=5 galutinių įvertinimu ir nurodoma kiek trūko kiekviena operacija: nuskaitymas, skaičiavimas, rikiavimas, padalinimas, išvedimai ir bendras laikas.

#### 6. Išeiti iš programos.
* Skirta nutraukti programos darbą.

## 3. Programos įdiegimo instrukcija
1. Surasti vietą kur bus diegiama programa (pvz. C:\Programų failai - Windows naudotojams arba bet kuri kita direktorija).

<img width="577" height="63" alt="image" src="https://github.com/user-attachments/assets/bb1f9297-3e37-411b-9d25-fe36f51088c1" />

<img width="175" height="35" alt="image" src="https://github.com/user-attachments/assets/ed708e4c-9246-4ba1-82f0-b143889a43a4" />


3. Programų failai sukurti aplanką "Studentai_v1". <img width="170" height="31" alt="image" src="https://github.com/user-attachments/assets/5d6972da-95ca-471b-b2e1-e98aa8729baf" />

5. Perkelti į aplanką Studentai_v1 visus programos failus.

<img width="227" height="708" alt="image" src="https://github.com/user-attachments/assets/a26a2a65-b627-46da-9643-09d2a80d9c43" />

7. Įsijungti terminalą (cmd).

9. Pasirinkti tinkamą darbo aplinką (nurodyti visą kelią iki Studentai_v1 aplanko - pvz. cd "C:\Program files\Studentai_v1").
10. Terminale paleisti: build.bat.

<img width="483" height="27" alt="image" src="https://github.com/user-attachments/assets/29ca8b4c-d553-4177-8154-132ec4ba6731" />
  
12. Terminalui baigus darbą (pasidarius pauzei) galima jungti programą: 1 būdas - terminale parašyti run.bat; 2 būdas - aplanke C:\Program files\Studentai_v1\build surasti Studentai_v1.exe ir jį paspausti du kartus.

<img width="456" height="30" alt="image" src="https://github.com/user-attachments/assets/5441ca7e-acf1-4378-8ab5-5eaeb7e59b77" />



