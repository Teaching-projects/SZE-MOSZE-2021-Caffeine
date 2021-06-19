# SZE-MOSZE-2021-Caffeine
Téma: Sakk játék
<br/>
Vas Richárd VXTPK3 <br/>
Varga Máté X2OWTO <br/>
<br/>
Dokumentáció : https://teaching-projects.github.io/SZE-MOSZE-2021-Caffeine/ <br/>

A csoportunk feladata egy projekt feladat levezénylése volt a Github online verziókezelő felület használatával, melynek keretein belül kellett létrehozni egy sakkprogramot.<br/>
<br/> 
## 1.A kód:<br/>
A játékot objektumorientáltan kódoltuk. A kódban a játékmenetet egy Game osztály vezeti, melynek van egy Board osztálya. Ebbe mennek az inputok és ez az osztály tárolja a sakktábla aktuális állapotát, amit a kapott inputokkal frissít, és kiír a változásoknak megfelelően. A tábla mindegyik celláját egy-egy absztrakt piece osztályból örökölt objektumban tároljuk, amit aszerint származtatunk, hogy ha van ott bábú akkor a bábú típusának megfelelően örökölt osztályt kap a mező, ha nincs akkor nullpiece lesz.<br/>
<br/>
## 2.Játékmenet:<br/>
A program indulásakor a program alaphelyzetbe állítja az aktuális játékhoz használt táblát, majd a felhasználó kezébe rakja az irányítást. A fehér oldalon lévő játékos kezd, majd a fekete bábúkkal játszó játékossal felváltva lépnek egyet-egyet. A játéknak akkor van vége, ha az egyik királyt leütötték (ha a program nem talál a táblán 2 királyt, befejezi az aktuálisan játszott játékot). Az összes bábú a sakk szabályai szerint képes mozogni a bábú típusát figyelembe véve (a program nem engedi meg a nem szabályos lépést). Egy bábú akkor van leütve, ha egy másik bábút szabályosan a helyére mozgatnak.
