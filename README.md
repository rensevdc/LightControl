
# Lightcontrol
*Functies in de wagen bedienen aan de hand van een swipe-paneel en kleurengebruik.* 

*Projectteam: Jarre Buyck; Rense Vandecasteele*

Datum: 24/01/2024

## Samenvatting

Tegenwoordig zijn er veel touchscreen en knoppen aanwezig in de wagen om functies te bedienen. Deze kunnen zeer handig zijn omdat ze veel mogelijkheden bieden om functies aan te passen in de wagen. Maar door een overaanbod van knoppen of een te ingewikkelde interface kan de bestuurder snel afgeleid worden in de wagen. Door interviews af te nemen en een literatuuronderzoek uit te voeren is er besloten geweest dat bestuurders afgeleid worden omdat ze moeten multitasken en zo hun focus van de weg verliezen. 

Een oplossing die de afleiding in de wagen kan verminderen is om te werken via een bediening waarbij de bestuurder zijn ogen niet van de weg moet halen. Ons idee is om via een swipepaneel een hoofdfunctie te bedienen zoals: muziek, navigatie, klimaat, etc. Per hoofdfunctie kan er een subfunctie bediend worden. Dit gebeurt via een draaiend deel op het stuur (cilinder) die naar voor of naar achter toe kan draaien. De bestuurder weet welke functie hij aan het bedienen is door lichtsignalen. Elke functie heeft zijn eigen kleur die vooraf in een app ingesteld kan worden. Belangrijke functies zoals de snelheid, waarschuwingssymbolen, brandstofpijl, ect. worden weergegeven op een HUD-scherm die zich in het zicht van de bestuurder bevindt. De navigatie wordt geregeld via een AR-projectie met pijlen die de richting aangeven.

Door gebruik te maken van twee onderdelen en geen touchscreen wordt de afleiding in de wagen verminderd, de bestuurder moet minder denken welke knoppen er moeten ingedrukt worden om een functie te bedienen en alle info staat in het zicht van de bestuurder.

<p align="center">
<img align="middle" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/b2dcd549-1412-4568-902f-9afe4e874f5a">
</p>

<p align="center">
<img align="middle" width="600" alt="image" src="https://github.com/rensevdc/LightControl/assets/155004668/dbb4c3e3-a795-4dd9-b8cb-b28698bd6fcc">
</p>

## Introductie

Het dashboard van hedendaagse wagens beschikt over touchscreen en veel knoppen om functies in de wagen te bedienen. Dit zorgt voor veel variaties van functies en zorgt dat de wagen bijna alles doet wat een gsm kan. Dit brengt echter een probleem met zich mee. Door de gecompliceerde interfaces of overaanbod aan knoppen is er een zekere afleiding achter het stuur. De bestuurder verliest voor een moment de focus van de baan en in deze korte tijd kan er een ongeval gebeuren. (Beeckman, 2021)[^1]

Het is dus van belang om een dashboard te ontwikkelen die de focus van de bestuurder niet van de baan af haalt. Ook is het nodig om een intuïtief bedieningssysteem te maken zonder complexe touchscreen of een teveel aan knoppen. (Staring, 2023)[^3]

De doelstelling is om een dashboard te maken die hoofdfuncties kan bedienen in minder dan vijf seconden en een subfunctie kan bedienen in minder dan twee seconden. Het moet veilig zijn en het mag de focus van de bestuurder niet van de baan halen. In het beste geval moet de bestuurder zijn/haar ogen niet van de baan halen om een functie te bedienen. 
Ook is er besloten geweest dat tijdens het rijden er geen scherm mag gebruikt worden (met uitzondering van AR-projectie en HUD-systeem met beperkte informatie). Schermen hebben de neiging om de focus van de baan af te halen en zo de bestuurder in gevaar te brengen. Als de wagen volledig in stilstand is gekomen kan er een scherm bediend worden om wat functies te regelen.  (Harrison, 2018)[^2]


## Methdologie
Het eerste semester was opgedeeld in twee grote fasen: de discovery fase en de definition fase. Zoals in de figuur hieronder te zien is werd er per fase met andere methodes het doel bereikt.

<p align="center">
<img align="center" width="1000" alt="image" src="https://github.com/rensevdc/LightControl/assets/155004668/51141c7f-e42c-4e1c-befe-b339d1bc7cdc">
</p>

In de eerste deelfase (vooronderzoek) werd er nagedacht over het probleem dat opgelost moest worden. Via een Literatuuronderzoek (met internetbronnen) werd er informatie opgedaan over dit onderwerp. Het was belangrijk om deze info goed te ontleden om het probleem te vinden. Na een literatuuronderzoek werd er naar GRAND STUDIO gegaan om de eisen van de opdrachtgevers beter in beeld te krijgen. Hierbij werden er heel wat dingen opgeklaard. Ten laatste werden er user interviews afgelegd. Hierbij werd er afgetoetst wat de gebruiker verwachte van een dashboard en op welke manieren de gebruikers afgeleid worden in de wagen. Al deze informatie werd gebundeld in een rapport en zo werden de eisen van het dashboard bepaald. Hierna werd uit de bekomen info bepaald wat de belangrijkste aspecten voor het dashboard zijn. Dit werd aan de hand van een WWWWWH, persona en decision framewrok gedaan. 

De tweede deelfase bestond uit het maken van concepten. Dit startte door een brainstormsessie in de les gebruiksgericht ontwerpen. Hierbij werden er ideeën uitgewisseld en nieuwe gedachtegangen vonden plaats. Op deze ideeën werd er een COCD-analyse toegepast om de beste ideeën in kaart te brengen. Na deze brainstormsessie werden er concepten bedacht die volstaan aan de eisen en wensen van het dashboard. Ten laatste werden de concepten gepitched aan de hand van een kleine video. 

Het tweede semester bestond dan weer uit drie ontwerpfases. In de eerste deelfase worden de ergonomische aspecten bekeken. Hierbij worden afmetingen en dimenties vanuit het vooronderzoek vergeleken met waarden die uit testen verkregen werden. De tweede deelfase werd op de UX-design gericht. Door expertesten en usertesten werd er bekeken of de interface van het dashboard aan de UX aspecten voeldoet. Door de 10 heuristieken hierop toe te passen kan dit beter geanalyseerd worden. De laatste fase bestaat uit de interaction design. Door frameworks te maken van de bedieningselementen kan er een beter zicht komen op de interacties die de gebruikers met het dashboard hebben. Hier wordt er een finaal prototype geleverd waarbij alle bedieningselementen van arduino ingebouwd zijn. 

## Discovery

**Doelstellingen**

In dit project wordt er gestreeft naar een car dashboard waar geen afleidingen aanwezig is en de focus compleet ligt op het rijden bij de chauffeur. Met de hedendaagse dashboards is dit niet mogelijk, dus zoeken we naar een dashboard dat makkelijk te bedienen is, weinig afleiding veroorzaakt, toch comfortabel is en de noodzakelijke functies bevat. Hierbij komen ook nog de wensen van de gebruiker. Veel van de nieuwe functies in een auto zijn niet noodzakelijk, maar vaak behoren deze wel tot de wens van de gebruiker. Daarom worden deze ook in het dashboard geplaatst. De doelstellingen van de discovry fase zijn om te achterhalen wie de gebruiker is, wat zijn verwachtingen zijn, welke technologiën er bestaan om functies in de wagen te bedienen en welke technologiën er mogelijks kunnen gebruikt worden om de functies te bedienen.

**Materiaal & methoden**

Om te weten wat belangrijk is en welke wensen de gebruiker heeft wordt er een vooronderzoek gedaan. Ook de oorzaak van ongevallen wordt onderzocht, hierdoor kunnen we het probleem beter aanpakken en dus meer focussen op de punten die echt de oorzaak zijn.

Een groot deel van het vooronderzoek werd online uitgevoerd, er zijn al veel studies uitgevoerd naar veiligheid in de auto toe. Deze studies werden gebruikt om te weten welke factoren in een auto de oorzaak zijn van ongevallen. We kunnen dan ook concluderen dat de meeste ongevallen veroorzaakt worden door touchscreen. Dit komt omdat touchscreen vaak een complexer systeem heeft om een doel te bereiken. Dit zorgt dat men meer stappen moet doen om een actie uit te voeren en dus langer hun aandacht weg van de baan is. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/af89ce06-ba4c-46b9-9646-eca88ac17652">
</p>

Naast online onderzoek werden er ook interviews met verschillende bestuurders gedaan. Bij deze interviews werd er gevraagd naar de functies van het dashboard die men gebruikt, de voorkeur tussen oudere dashboards en nieuwere, ect. Tijdens de interviews werd er ook een tabel gemaakt met functies, in deze tabel werd gevraagd welke functies men het meest gebruikt en welke functies het belangrijkst zijn. Aan de hand van deze tabel kunnen er functies uit de hedendaagse auto gehaald worden om de complexheid van het systeem te verminderen. Uit de interviews zelf werd geconcludeerd dat een dashboard met enkele knoppen de voorkeur krijgt op complexe dashboards. Veel moderne functies behoren wel tot de wensen van gebruikers zoals het verbinden van de gsm met de auto waarbij Spotify, handsfree bellen,... De geïnterviewden gaven ook nog enkel dingen aan die ze zelf gebruiken en handig vinden. De knoppen op een stuur waren een groot pluspunt, het DIU-scherm tussen het stuur was ook een toepassing die als handig omschreven werd en zelfs groter mag.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/982a12dc-e669-48f0-9237-ae1d61595fc4">
</p>

**Resultaten**

Uit het vooronderzoek wordt er al een algemeen beeld gegeven waar de focus moet liggen. Aangezien de grootste afleiding ontstaat bij het gebruiken van touchscreen wordt er voor een screenfree display gekozen d.w.z. waar er zo weinig mogelijk tot geen schermen aanwezig zijn. Er wordt voorkeur gegeven om de controls bij het stuur te houden en niet op een andere plaats zoals het dashboard. Er zal dus gestreefd worden naar een centraal besturingssysteem waar weinig tot geen schermen aanwezig zijn en een interface op het stuur die acties binnen bepaalde onderdelen van het besturingssysteem kan voltooien. Uit onderzoek zien we ook dat tijdens het rijden met het voertuig weinig instellingen moeten aangepast worden en er zelfs geen vraag is naar het kunnen sturen of lezen van berichten. Het instellingsmenu van de wagen wordt vrijwel niet gebruikt en zal dus ook niet snel beschikbaar moeten zijn.

Mogelijke technologiën die gebruikt kunnen worden zijn AR-technologie om de navigatie te bedienen, verschillende knoppen op het stuur, spraaktechnologie, ect. Om zonder schermen te werken moet er een andere manier gevonden worden om feedback aan de bestuurder te geven. Dit kan gebeuren via trilfuncties, spraakassistentie, kleurgebruik, info op het windscherm, ect.

**Conclusies & implicaties**

Uit het vooronderzoek is het duidelijk geworden aan welke aspecten het dashboard moet voldoen. Het belangrijkste aspect is veiligheid, de bestuurder moet veilig het dashboard kunnen bedienen en moet zo weinig mogelijk zijn ogen van de baan afhalen. Het is ook duidelijk dat er veel verschillende functies moeten bediend worden. Er zal dus een manier moeten gezocht worden om al deze functies te kunnen bedienen zonder een scherm of te veel ingewikkelde knoppen. Natuurlijk moet het dashboard ook nog in de wagen passen en moet deze een mooi afgewerkte look krijgen.
> [!NOTE]
> Designrequirements
> - De bestuurder mag niet afgeleid zijn van de weg
> - De belangrijkste functies moeten bedienbaar zijn met het dashboard
> - Er mogen geen overbodige schermen gebruikt worden

## Definition

**Doelstellingen**

De doelstelling van de definition fase was om onze concepten te testen bij gebruikers. Hieruit kan beslist worden met welk concept er verder gewerkt wordt. Ook wordt er gekeken waar de sterke en zwakke punten in het gekozen concept zitten en worden deze nog verder uitgewerkt. Het hoofddoel is om te weten of het concept kan werken of niet.

**Materiaal & methoden**

Het materiaal dat gebruikt wordt zijn de zes prototypes: een PlayStation met een racesimulator, een PlayStation stuur met pedalen, een muziek box en een RGB-lamp die op afstand bediend kan worden. 
De methode die gebruikt wordt is de wizard of Oz testing. Hierbij werden er testen gedaan waarbij de interviewer op de achtergrond de omstandigheden veranderde. 

Aan de gebruiker werd er gevraagd om een traject op een racespel af te leggen (hierbij komt die wat obstakels tegen zoals bochten, tegenliggend verkeer, dieren dat over de baan heen lopen, ect.) De baan werd weergegeven via ingame navigatie op 'The Crew 2'. Eens de gebruiker de bediening gewoon is geworden van het stuur en pedalen wordt er per prototype gevraagd om een functie in te stellen (dit kan muziek, klimaatregeling, temperatuur, ect. zijn). Als de gebruiker op de juiste manier de prototypes bediend, wordt het kleur van de functie aangegeven en veranderde de omstandigheden (muziek luider/stiller, kleur feller/minder fel). Voor zowel de eerste en tweede wave van de testen werden de prototypes bij telkens drie gebruikers getest. 

Na de testen werd er nog een interview afgenomen om de mening van de gebruiker te achterhalen en ook de diepere betekenis hiervan te vinden. Hieruit worden er dan nieuwe concepten gemaakt. Achteraf werd er gekeken hoe hun rijgedrag was bij het gebruiken van de verschillende prototypes. 

**Resultaten**

Voor de eerste wave prototypes worden er drie testen gedaan (per prototype één test). Dit werd gedaan zoals de methode die hierboven beschreven staat. Bij de eerste wave werd er gekeken welke bediening de beste is. Ook werd er getoetst of het kleurengebruik en de AR-projectie voldoende duidelijk zijn.

Voor de bediening met het controlepaneel dat per vinger een andere functie aanduidt werd het meteen duidelijk dat dit niet zo intuïtief was als eerst gedacht. De gebruikers hadden moeite om de juist functie te vinden. Ook week de auto bij elke gebruiker van de baan af als dit prototype gebruikt werd. Het bleek uit de vragen achteraf dat het te complex was om de juiste vinger bij de juiste knop te houden en deze dan nog eens apart in te drukken. Ook naar het einde toe van de test was het duidelijk dat de auto van de baan bleef afwijken bij het bedienen van deze functie.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/7d59b4a3-f843-4939-91ad-e27308f22881">
</p>

Bij de draaiknop is er een ander verhaal. Het was bij elke gebruiker duidelijk dat er moest gedraaid worden aan het prototype om een naar een andere functie te bedienen. In het begin week de auto licht van de baan af maar naarmate de gebruikers gewend werden aan de bediening was er geen afwijking meer. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/066b2366-78d4-4849-ae6a-5de688a39cdf">
</p>

Voor het swipe-paneel werden dezelfde resultaten bekomen als bij de draai bediending. Het was snel duidelijk wat er verwacht werd bij het prototype en de functies werden snel gevonden. Hierbij week de auto nog minder van de baan af dan bij de voorgaande prototypes (dit heeft ook voor een deel te maken dat ze de bediening van het spel beter onder de knie kregen). Naar het einde toe van deze test week de auto ook niet meer van de baan af.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/fb8c64eb-e69b-42f1-8e96-7a473cbc84f5">
</p>

Voor het bedienen van de sub-functies werd er snel gevonden dat er een het deel op het stuur moest gedraaid worden. Dit vonden de gebruikers een zeer goed onderdeel van de prototypes. *‘Dit stimuleerd ook het tien voor twee rijgedrag!’*

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/1b3d2cf9-15eb-43f4-b61b-270253f844cc">
</p>

Ook het gebruik van een kleurenindicatie vond elke gebruiker zeer goed, sommigen vonden wel dat de kleuren nog op een ander deel kunnen terugkeren. De AR-projectie die gesimuleerd werd door de game zelf vonden de gebruikers ook heel handig. *‘Het is veel beter dan te kijken op een klein schermpje!’*. 

Er bleek ook dat over het algemeen de bedieningselementen wat dichter bij de gebruiker mochten geplaatst worden. 

Bij de tweede wave van prototypes wordt er verder gewerkt met het swipe-paneel. Een algemeen prototype werd gemaakt die in verschillende toestanden kan opgesteld worden. Hierin is er een gleuf gemaakt zodat er licht door kan schijnen van een RGB-lamp. Deze worden weer getest via the wizard of Oz testing. 
De eerste opstelling is gelijkaardig aan de het vorige swipe paneel. De bedoeling is dat de gebruiker met een hand boven of op het paneel swiped (van links naar rechts). De kleuren veranderen weer bij een andere functie. De secundaire bediening is nu ook weer via de cilinder op het stuur. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/eaadde1b-df2c-4579-8e60-73be341b974c">
</p>

De tweede opstelling is wanneer het paneel rechtstaat en de gebruiker van boven naar beneden of visa versa moet bewegen met een hand. Ook weer hier veranderen de kleuren als er een nieuwe functie bekomen is. De cilinder wordt ook hier gebruikt om de subfunctie te bedienen. *‘Deze houding komt minder natuurlijk over dan de voorgaande swipebeweging.’*.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/fe7f465a-b858-46f3-998c-1faf4df89a45">
</p>

De laatste opstelling is wanneer de gebruiker van links naar recht moet swipen met een hand. Ook weer hier wordt er gebruik gemaakt van kleuren die de hoofdfunctie aanduiden. Maar in de plaats van een cilinder op het stuur wordt een draaiknop gebruikt om de secundaire functies te bedienen. Hierbij wordt er toch nog eens nagegaan of de gebruikers deze manier van werken niet beter vinden dan met de cilinder op het stuur. Hieruit bleek dat het werken via de cilinder aan het stuur een betere optie was dan een aparte draaiknop. Dit kwam doordat de gebruiker zich meer kon focussen op de baan indien de handen aan het stuur waren. *‘Met de draaiknop voel ik me minder gefocussed op de baan, ik moet ook weer mijn arm weg van het stuur bewegen.’*.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/d3fae400-ac21-4a3d-b94c-ab2b8183b0fd">
</p>

**Conclusies & implicaties**

Voor volgende prototypes zal er verder gewerkt worden met het swipe-paneel aangezien deze als beste beschouwd werd door de gebruikers. Het blijkt dat het swipen van links naar recht beter aanvoelt dan van boven naar onder toe. Ook wordt het bedienen van de secundaire functies liever gedaan via een cilinder aan het stuur dan met een aparte draaiknop. Het zal beter geïntegreerd worden in het dashboard en ook zal er een interface gemaakt worden die samengaat met de kleuren van de functies. Het kleurgebruik zal op meerdere plaatsten terugkomen en ook zal dit beter geïntegreerd worden in het dashboard. 

> [!NOTE]
> Designrequirements
> - Hoofdfuncties moeten in minder dan 3 seconden bediend worden
> - Subfuncties moeten in minder dan 5 sec bediend worden
> - De LEDstrip moet ook zichtbaar zijn overdag
> - De bedieningsring moet ingebouwd zijn in het stuur
> - Het dashboard mag niet complex zijn

**Bill of materials**

- Kwalitatief swipe-paneel
- Dashboard waarin prototypes kunnen geplaatst worden
- HUD-systeem
- Muziek box
- RGB lichten
-	Arduino prototypes die inspelen op het swipepaneel

## Anthopometrie

**Doelstellingen**

De doelstelling van de Anthropometrie analyse is om het ergonomisch aspect van het concept beter uit te werken en te optimaliseren. Uit deze analyse worden er opnieuw design requirements opgesteld en nieuwe iteraties gemaakt. 

**Materiaal & methoden**

Om deze analyse goed uit te voeren zijn er bepaalde materialen en methodes nodig. Er zullen nieuwe prototypes gemaakt worden die de ergonomie van de bediening beter zal kunnen bekijken. Hierbij zullen vooral de physical ergonomics geanalyseerd worden.

Belangrijke aspecten waar op gefocussed zal moeten worden zijn:
- Op welke plaats de bediencilinder zal moeten komen.
- Hoe de bediencilinder het beste bediendt wordt (grootte, beweging hand/vingers).
- Waar het swipepaneel zich moet bevinden.
- Hoe ver het swipepaneel zich moet bevinden.

De designmethode die zal worden gebuikt is: Design for adjustable (aangezien de zeten van de wagen per persoon kan ingesteld worden). De ergonomie zal in twee delen opgespitst worden (het swipepaneel en de bedieningsring).

**Reslustaten**

**Swipepaneel**

**Ergonomische aspecten**

Het eerste aspect dat bekeken wordt is hoever het swipepaneel gemonteerd moet worden t.o.v. de bestuurder. Zoals in onderstaande figuur te zien is, zou het swipepaneel best in een gebied tussen twee cirkel met een straal tussen de 394 en 508 mm geplaatst worden (met als middelpunt de rechterschouder van de bestuurder). (Zhanfeng, 2018)[^4] 

De beste hoogte om het display te bedienen is op elbooghoogte zoals op onderstaande figuur. Dit komt meestal overeen met een hoogte tussen de 250 mm en 350 mm t.o.v. de basis van de versnellingspook. Ook bevindt het swipepaneel zich best niet verder dan 590 mm t.o.v. het midden van het stuur. (Blumstengel, 2019)[^5]

<p float="left">
  <img align="top" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/6eaba38c-1336-4648-9423-11f3994a7f10" width="500" />
  <img align="top" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/98b7f8ab-325a-456e-bf75-417ddaa0cffc" width="500" />
</p>


**Standaardderivaties en percentielen**

Via de DINBELG worden enkele maten bekeken voor 5% tot 95% van de bevolking. 

| Afmeting | Gemiddelde (mm) | Z-waarde | SD | Min (mm) | Max (mm) |
| --- | --- | --- | --- | --- | --- |
| Rijkdiepte | 767 | 1,65 | 50 | 684,5 | 849,5 |
| Schouderbreedte | 438 | 1,65 | 32 | 385,2 | 490,8 |
| Ellebooghoogte | 244 | 1,65 | 24 | 204,4 | 283,6 |

Merk hierbij dat de afstand tenopzicht van het stuur minimaal 192,6 mm en maximaal 245,4 mm is. Dit doordat er maar voor de helft van een schouderbreedte rekening moet gehouden worden. Het swipepaneel komt best ook hoger dan de ellebooghoogte aangezien bestuurder niet rijden in de auto met een arm die 90° geplooid is. Ook zal rijkdiepte een kleinere waarde hebben doordat de bestuurder meestal niet in de wagen rijdt met een volledig gestrekte arm. 

**Simulatie**

Vervolgens worden deze waarden in een Siemens NX simulatie geanalyseerd. Er worden verschillende situaties bekeken waarbij het swipepaneel wordt verplaatst. De eerste manier is op een afstand van 245,4 mm t.o.v. het midden van het stuur. Ook op een afstand die 648,5 mm t.o.v. de rechterschouder. Zoals te zien is op onderstaande figuur is de rechter arm hoogte buiten de comfort zone, de schouderpositie zitten juist op de rand van comfortabel (dit blijft zo voor elke  simulatie, dus heeft dit niks te maken met de positie van het swipepaneel). 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/4404519c-4530-4c7d-b497-929f125680d1">
</p>

De volgende positie is indien het swipepaneel swipepaneel op een afstand van 400 mm ten opzichte van de schouder geplaatst wordt. De andere waarde veranderd niet. Hieruit blijkt dat de arm elevation een nog slechtere waarde heeft dan bij de vorige opstelling.

Vervolgens wordt het scherm terug op de 648,5 mm geplaatst t.o.v. de schouder, deze keer staat het scherm op een hoogte van 283,6 mm ten opzichte van het zitvlak (ongeveer gelijk aan de basis van de versnellingspook). Hierbij is de arm elevation nogmaals slechter dan voordien. Indien het scherm op een hoogte van 204,4 mm geplaatst wordt is de arm elevation beter.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/8e0a45ee-d865-4466-b5c2-8035d5d743ae">
</p>

**Resultaten**

**Bediencilinder**

**Het stuur**

Om het ergonomisch aspect van het bedieningswiel en de andere knoppen te bepalen word eerst gekeken naar het stuur in het algemeen. De bedieningscilinder zou gemonteerd worden op de rand. Het draaien van het stuur wordt gemanipuleerd in het xy-vlak. Duw op trekbewegingen (voor de bedieningsring) worden dus best in de z-richting gedaan.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/6df68a08-4f89-4739-9d77-b8f2976434cb" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/a616de61-f869-4a70-ad78-544bf44e7f44" width="500" />
</p>

De knoppen op het stuur bestaan meestal uit drukknopen in de Z-richting of een rollbeweging rond de x-as. De knoppen zullen geplaatst moeten worden zodat niet gewilde interactie vermeden word. De meeste acties op het stuur worden uitgevoerd door de duim. De positie van de handen op het stuur zijn 10 en 2 volgens de klok. Deze positie zorgt ervoor dat bij het crashen van het voertuig de airbag de armen niet tegen het lichaam aanduwd. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/ec0dd831-f80b-4bbd-8f22-da584bfc313d">
</p>

Op de rand van het stuur kan men ook enkele functies aanbrengen zoals bvb. knijp en draai bewegingen of veeg bewegingen. Hierbij worden de regels ook weer toegepast.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/35741724-7077-4019-b271-6601478d55ba" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/822a2c09-b479-45b2-96ed-20ce364cbd97" width="500" />
</p>

**Fielresearch**

Om de positie van de ring op het stuur te bepalen moet er bekeken worden waar de handen van de bestuurder gepositioneerd zijn tijdens het rijden. Als passagier worden de handplaatsingen van verschillende bestuurders gemapped zodat achteraf de beste plaatsing van de bedieningsring bepaald kan worden.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/271459b4-5844-4c85-b824-13f01644f353" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/52255704-3116-4d55-8f03-0d21ed6376b6" width="500" />
</p>

Uit de fieldresearch blijkt dat de rechterhand vaak van het stuur gehaald wordt. De linkerhand beweegt meer langs het stuur. Tijdens de draai en grijp beweging zijn er 3 punten die vastgegrepen worden: 12u, 4u en 8u. In onderstaande figuur zijn de groene gebieden degene die het meest aangeraakt worden tijdens het rijde. Naarmate de kleur naar oranje toeneemt zijn de plaatsen die minder aangeraakt worden en de witte plaatsen worden amper aangeraakt.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/966f5bd0-bb0c-47d1-ab25-8f44204000fe">
</p>

**Swipepaneel**

**Gebruikerstesten (N=4)**

Het voorgaande ergonomische onderzoek wordt ook nog eens getest met gebruikers. Het concept wordt weer in twee delen opgesplitst: het swipepaneel en het bedieningscilinder. De bedoeling van deze testen is om na te gaan of afstanden van het voorgaand onderzoek ook kloppen in de praktijk. 
Het prototype waarvan gebruik gemaakt wordt bestaat uit een kartonnen plaat die in de wagen geplaatsts wordt waarop er negen verdelingen staan die telkens een apparte locatie van het swipepaneel moeten aanduiden. De gebruiker swiped over elke positie en geeft vervolgens aan hoe dit aanvoelt. Dit wordt dan gemapped op een template. Voor het bedieningscilinder wordt er op het stuur vier mogelijke locaties afgeplats met schilderstape. Ook hier geeft de gebruiker aan welke positie het best aanvoelt. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/5b673fa3-b226-4b89-a94f-64fb850188aa">
</p>

Uit de testen dat de meest comfortabele plaats voor eht swipepaneel tussen 1 en 2 ligt. Deze positie wordt gekozen doordat het dicht genoeg bij het stuur zit. Ook staat het paneel op die positie niet te hoog of te laag ten opzichte van het stuur. 
Na metingen blijkt dat het swipepaneeltussen 100 en 250 mm van de rechterkantvan het stuur moet geplaatst worden, op een hoogte tussen 370 en 420 mm ten opzichte van de basis van de versnellingspook. Ook op een afstand tussen de 400 en 600 mm van de rechterschouder van de bestuurder zit.

Uit de testen van het bedieningscilinder blijkt dat de beste positie voor elke gebruiker op de rechterbovenkant van het stuur plaatsvind. Deze test werd uitgevoerd met zowel links als rechtshandige gebruikers. Dit wordt als de beste positie aanvaard omdat de gerbuikers meteen na het swipen de bedieningsring kunnen manipuleren met diezelfde hand. Nadien wordt de positie op het stuur gemeten en deze ligt op een hoek van 45° tegen de klok in ten opzichte van het midden van het stuur. 

**Conclusies & implicaties**

| Afmeting | Vooronderzoek (mm) | Gebruikerstest (mm) |
| --- | --- | --- |
| Rijkdiepte | 400 - 648,5 | 400 - 600 | 
| Schouderbreedte | 192,6 - 245,4 | 100 - 250 | 
| Ellebooghoogte | 204,4 - 283,6 | 370 - 420 | 

Zoals vooraf aangegeven is verschillen de waarden van de ellebooghoogte doordat deze in het vooronderzoek bij een arm die 90° gebogen is werd bekeken. De andere waardes liggen ongeveer wel in hetzelfde interval.

Voor de bedieningsring blijkt dat de beste positie op een hoek van 45° ten opzicht van het midden van het stuur ligt. Indien deze waarde vergeleken wordt met de fieldresearch dan blijkt dat deze positie dicht bij een plaats op het stuur ligt waar de hand van de bestuurder het vaakst komt tijdens het rijden.

> [!NOTE]
> Designrequirements
> - Het swipepaneel zit tussen de 100 en 250 mm van de rechterkant van het stuur
> - Het swipepaneel zit op een hoogte tussen de 370 en 420 mm van de basis van de versnellingspook
> - Het swipepaneel zit tussen de 400 en 600 mm ten opzichte van de rechterschouder van de bestuurder
> - De bedieningsring zit op een hoek van 45° ten opzichte van het midden van het stuur
> - Het dashboard moet bedienbaar zijn voor 95% van de populatie

## Human Mind

**Doelstellingen**

De doelstelling van dit deelonderzoek is om de gebruiksvriendelijkheid en UX aspecten van het prototype in diepgang te bekijken. Aan de hand van twee experttesten (N=2) en gebruikerstesten (N=4) zal dit aspect van het dashboard verbeterd worden.

**Materiaal en methoden**

Aan de hand van Arduino en Protopie wordt er een systeem gemaakt waarbij er op een gsm geswiped wordt om een display aan te sturen. Indien er op de gsm geswiped wordt kan het display tussen drie situaties wisselen (Spotify (groen), Klimaatregeling (rood) en temperatuurregeling (blauw)). Voor het onderdeel van spotify kan via een potentiometer het volume van afspelende muziek aangepast worden. Voor de klimaatregeling kan er tussen vier verschillende bedieningen verwisseld worden met de potentiometer. De temperatuur kan ook veranderen door aan de potentiometer te draaien. 

https://github.com/rensevdc/LightControl/assets/155004668/27d68c95-c239-464f-94fb-af8cbf75979e

**Resultaten**

**Expert test 1 (N=2)**

Uit de experttesten blijkt dat de interface nog niet in orde is. Er moeten meer iconen gebruikt worden om aan te geven op welke functie de gebruiker zich begeeft. De Spotify bediening met de potentiometer werkt goed maar ook hier is er nog een functie nodig om de muziek te kunnen pauzeren en van playlist te wisselen. Hiervoor zal er bij volgende prototypes extra knoppen toegevoegd worden om deze functies te bedienen. Het swipen tussen verschillende functies wordt wel als goed ervaren maar door een bug kan er maar naar één kant geswiped worden. 
Doordat dit prototye in een te vroege status is om verder op te evalueren zal er na wat aanpassingen opnieuw een expert test afgenomen worden.

**Gebruikerstesten (N=4)**

Voor de gebruikerstesten wordt het eerste prototype aangepast met de feedback uit de experttesten. De aanpassingen die gemaakt worden zijn betere iconen op het klimaatmenu, een cijferwaarde voor de temperatuurregeling, een intensiteitsregeling voor airco, voorruit of achterruitregeling. Ook worden er twee knoppen toegevoegd om extra functies beter te kunnen bedienen.

De analyse van de gebruikerstesten is te vinden onder deze link: https://acrobat.adobe.com/id/urn:aaid:sc:EU:e694e1f7-4db2-437c-85ce-4aed0f00de9a 

*Bediening Spotify:*
De knoppen vinden ze handig te gebruiken vooral de pauze en doorspoelknop. De interface vinden ze duidelijk, wel zou de pauze knop nog moeten veranderen van icoon. (1) Er is een aanpassing nodig aan de bediening van de knoppen doordat deze meerdere signalen doorgeeft indien de knop te lang ingedrukt is.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/81bc21f6-f091-4e1a-a659-05754d3d6fa0">
</p>

*Bediening temperatuurregeling:*
Door het toevoegen van een cijferwaarde wordt de bediening van deze interface duidelijker. Bij de intenciteitsregeling is het duidelijk dat er tussen 20 standen gegaan kan worden. De witte kleur van de leds duiden duidelijk aan dat er geen temperatuur maar intenciteit geregeld wordt. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/0ef47f86-ab79-47e2-89ac-f716fa04a187">
</p>

*Bediening klimaatmenu:*
Door de iconen is het duidelijker wat de bedoeling van deze interface is. Het vergroten en verkleinen van de vakken was is een goeie manier om de poitie aan te geven. Het rood worden van de vakken geeft ook een goeie feedback hierbij. Eén gebruiker vond het verloop tegen de klok in van het selecteren van de functie niet natuurlijk aanvoeld en dat het beter zou zijn om de funties met de klok mee te laten bewegen of op een andere manier (aangegeven door de rode pijl). Het overgaan naar de temperatuurklok met de knoppen vinden de gerbuikers ook handig, maar ze zouden nog een extra bevestiging willen om aan te geven dat ze de functie veranderd hebben zoals een extra keer klikken op een knop.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/5d3c28f0-fbdf-4e63-ac49-e976b376383d">
</p>

**Conclusies & implicaties**

De belangerijkste conclusies zijn dat het dashboard wel degelijk werkt. Uit de testen blijkt dat gebruikers dit graag gebruiken en dat het een veel minder complexe werking heeft dan hedendaagse dashboards. 
Over het algemeen zou de layout van het dashboard wat mooier mogen zijn.  
De bediening wordt duidelijk door de potentiometer en het swipepaneel. De gebruikers vinden dit een aangename en zelf toffe manier om functies aan te passen. 
Om minder afgeleid te zijn zou het beter zijn moest het display uitvallen na vijf seconden als er geen functie bediend wordt. Ook zou het display wat kleiner mogen zijn zodat het wat minder opvalt en ook weer de LEDstrip de bovenhand kan nemen. Bij de elke interface is er vaak nog een extra bevestiging nodig die aangeeft indier er een functie aangepast werd. 
De gebruikers zouden dit dashbaord in hun auto willen gebruiken en het zelf vooropnemen omdat het veel veiliger is dan ingewikkelde touchscreen om te complexe knoppen.

> [!NOTE]
> Designrequirements
> - De interface moet neutraal zijn
> - Er is extra feedback nodig bij het aanpassen van een functie
> - Het dashboard is energiezuinig
> - De interface mag een paar animaties hebben

**Expert test 2 (N=2)**

Protocol expertesten (met 10 heuristieken): https://acrobat.adobe.com/id/urn:aaid:sc:EU:e2d8e9e2-8357-4fb2-a962-19639df5569f

Bij de tweede expert testen werd er weer een nieuw prototype gebruikt. Het display werd aangepast met de feedback uit de voorgaande testen. De werking blijft echter hetzelfde. Door twee aparte interfaces te maken wordt er achteraf bepaald uit welke onderdelen van beide interfaces het best overkomen. Deze keer wordt er getest met zowel een gsm die dient als een fysiek swipesysteem en een grove sensor die vanop een afstand bediend kan worden. Na de test werden de expert gevraagd om een vragenlijst met de 10 heuristieken in te vullen om zo te bekijken of de werking en bediening van de interface goed scoort op user Experience.

https://github.com/rensevdc/LightControl/assets/155004668/ff5a35de-5090-4249-b663-6f9598e03a4b

*Bediening Spotify:* 
Voor de bediening van Spotify blijkt dat de onderste situatie beter aanvaard wordt. Beide experts vinden deze meer herkenbaar dan de nieuwe bovenste bediening. Om de bovenste beter te maken zou de betekenis van de bollen (het wisselen van playslist) beter moeten aangegeven zijn. Het aangeven van een schaal die het volume voorsteld wordt als goed ondervonden. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/c903b55b-ee37-4de3-ad0e-1bf97365f2e2">
</p>

*Bediening temperatuurregeling:* 
De experts vinden dat het beter is om een getalwaarde af te lezen voor de tempereatuur, zo weten ze exacter hoe warm het is in de wagen. De layout van de eerste bediening vinden ze dan wel beter dan degene met de cijfers. Voor de rest is de werking van deze functie duidelijk genoeg.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/cb42de9b-68e9-4b14-8662-f442cf037c38">
</p>

*Bediening klimaatmenu:* 
Hierbij vindt de ene expert de bovenste en de andere expert de onderste bediening beter. De bovenste wordt beter ondervonden doordat het duidelijker is met de rode pijl op welke functie ze juist staan. Het zou wel beter zijn mocht de layout hiervan wat meer diepgang krijgen. De onderste bediening wordt dan aan de andere kant beter ondervonden doordat het overzichtelijker is. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/66156fdc-433c-43c7-8f77-9c4bdb8e7804">
</p>

Ook bij het aangeven van de intensiteit van de airco/voor of achterruit verwarming is er een meningsverschil tussen de experts. De bediening links wordt goed ervaren doordat de intensiteit niet echt een waarde nodig heeft en de bediening recht wordt beter ervaren juist doordat er wel een getalwaarde staat.

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/6f34e32c-83a7-4079-a37b-fa334c6f5141">
</p>

Voor de zetelverwarmingsintensiteit vinden beide experts de bediening met drie grote balken de beste omdat de zetelverwarming vaak niet met een exacte waarde maar met een standensysteem werkt. 

<p align="center">
<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/c1f5b67c-604e-45f1-8d22-b997e34225f3">
</p>

**10 heuristieken:**

Na de testen en de bevraging hebben de experts een invulblad gekregen met de 10 heuristieken op en een schaal. Er werd hen gevraagd om deze in te vullen en waar nodig ook feedback op te geven. Dit was telkens op een schaal van 1 tot en met 5 of met een schaal eerder niet - eerder wel. Naast een heuristiek staat telkens tussen haakjes welke score er gegeven is. *bv. (4-5) de eertse expert gaf een score van 4/5 en de tweede expert gaf een score van 5/5*.

Analyse 10 heuristieken: https://acrobat.adobe.com/id/urn:aaid:sc:EU:30cf4c6a-3f0b-40a6-a126-7f0843af3a9e

*Regelmatig gebruik:* (5 - 4)
De experts vinden het een innovatief systeem om mee te werken en vinden de bediening met de cilinder en swipesysteem zeer tof. 

*onnodig complex:* (helemaal niet - helemaal niet)
De experts vinden het systeem niet complex en denken ook dat andere gebruikers er snel mee weg zullen zijn.

*gemakklijk te gebruiken:* (5 - 5)
Door een simpele bediening wordt het dashboard als eenvoudeig ervaren. Ook het swipesysteem maakt het makkelijk om functies van elkaar te onderscheiden. Het kleurengebruik geeft dan ook weer een extra bevestiging.

*Hulp nodig van een technisch persoon:* (eerder niet - eerder niet)
Het systeem makkelijk te bedienen dus de expert vinden ook niet de gebruikers hulp zouden nodig hebben van een persoon met de nodige kennis. 

**Conclusies & implicaties**

De conclusies uit de expert testen zijn dat het display beter afgewerkt moet zijn en dat het ook minder afleidend moet gemaakt worden. De interface zit al goed in elkaar om functies te bedienen maar er moeten nog een paar kriteria voldaan worden vooraleer het perfect is. De bediening via het swipepaneel en de bediencilinder zijn al goed uitgewerkt en makkelijk in gebruik. Er is al een goeie user experience bij deze interface maar alles zou moeten geïntegreerd moeten zijn om een volledige gebruikservaring te kunnen beleven. 

> [!NOTE]
> Designrequirements
> - De interface heeft een aantrekkelijke layout
> - De interface is makkelijk te bedienen
> - Alle functies op de interface zijn duidelijk
> - De interface mag niet voor extra afleiding zorgen
> - De interface moet uitvallen na 5 seconden niet gebruikt te zijn
> - Er zijn knoppen nodig om extra functies te bedienen
> - Er zijn cijferwaardes nodig voor temperatuurinstellingen

## Interaction-design

**Doel**

Het doel van de interaction design fase is om de finale interacties van de gebruiker met het prototype te onderzoeken. In deze laatste fase worden de protopie omgeving bediend door de arduino schakeling in te bouwen in een echt werkend tastbaar prototype die voeldoet aan de gewenste designrequirments.

**Meterialen en methoden**

Voor dit onderdeel wordt een cart omgebouwd zodat hierop de bedieningsring (potentiometer), knoppen en het swipesysteem op gemonteerd worden (een houten opstelling waar een gsm en grove sensor in passen die modulair verwisseld kunnen worden). Achter het stuur komt een display te staan (pc scherm) die de interface laat zien. Op het swipesysteem komt een LEDstrip te liggen die de kleurenindicatie weergeeft. Ook nu wordt er via protopie en arduino gewerkt (de arduino code en protopie files zijn onderaan dit onderdeel te vinden).

Ook wordt er een human product interaction flowchart en interaction modalities opgesteld. Hierdoor zal de werking en onderlinge connecties van het prototype beter bekeken kunnen worden. 

**Resulataten**

**Human/product interaction flowchart**

Onderaan is de interaction flowchart van dit prototype te zien. Zoals eerder aangehaalt is kunnen drie hoofdfuncties van het dashboard bediend worden. Deze kunnen verwisseld worden door het swipesysteem die langs beide kanten werkt. Voor het muziek onderdeel geldt dat indien er aan de bedieningring (potentiometer) gedraaid wordt dat de muziek luider of stiller zal afspelen. Indien er op de eerste knop gedrukt wordt zal de muziek pauzeren of terug afspelen. Indien er op de tweede knop gedrukt wordt zal er van playlist verwisseld worden. 

Voor de temperatuurregeling geldt er dat indier er aan de controlring gedraaid wordt dat de temperatuur verhoogd of verlaagd. 

Voor de klimaatregeling geldt wanneer er aan de controlring gedraaid wordt dat er een selectie zichtbaar komt van 4 verschillende functies (voor en achterruitverwarming, zetelverwarming en airco). Het hangt af van de positie van de potentiometer op welke functie er zich begeven wordt. Indien er dan op de knop geduwt wordt voor de voor of achterruitverwarming of zetelverwarming zal er overgegaan worden naar een scherm waarop een intensiteitsschaal te zien is. Door dan aan de controlring te draaien zal de intensiteit stijgen of dalen. Indien er terug op de eertse knop gedrukt wordt gaat de interface weer naar het klimaatmenu.

<p align="center">
<img align="center" width="900" alt="image" src="https://github.com/rensevdc/LightControl/assets/155004668/a1dac3a5-e292-45a0-b799-3a42c671ca00">
</p>

**Interaction modalities**

Ook wordt er een interaction madalities schema gemaakt. Hierdoor zijn alle sensors, knoppen en potentiometers aan de gebruiker gelinkt. 

In het eerste deel worden de tastzintuigen van de gebruiker in beeld gebracht. Bij dit prototype is er alleen een input onderdeel voor de tast. Via knoppen, een potentiometer en een touchscreen van een gsm zal de gerbuiker input geven aan de protopie omgeving waardoor er dingen op de interface zullen veranderen.

In het volgende deel wordt het gehoor bekeken. Hier is er alleen een output onderdeel. In het muziekgedeelte van de interface worden er twee nummers afgespeeld. Ook kan via een potentiometer de muziek luider of stiller afspelen. Dit wordt door speakers tot bij de gebruiker gebracht. 

Ten laatste wordt er in dit prototype ook gebruikt gemaakt van het zicht van de gebruiker. Hierbij wordt er zowel input als output gekregen van de gebruiker. Aan de input kant wordt er tussen functies van de interface verwisseld doordat de gebruiker met zijn hand over een grove sensor beweegt (van links naar rechts of omgekeerd). Bij de output horen het scherm en de LEDstrip. De LEDstrip geeft een extra feedback aan de gebruiker als deze zich op de juiste functie bevinden.  

<p align="center">
<img align="center" width="900" alt="image" src="https://github.com/rensevdc/LightControl/assets/155004668/50f93f47-7b05-445f-9d1e-3c9ae77e0a61">
</p>

**Conclusies en implicaties**



## Design  requirements

| ID | Design Requirement | Bron |
| --- | --- | --- |
| **Deel 1** | **Algemeen** |
| 1.1 | Het dashboard is energiezuinig | Define user test |
| 1.2 | Het dashboard moet bedienbaar zijn voor 95% van de populatie | Ergonomische testen |
| 1.3 | Hoofdfuncties moeten in minder dan 3 seconden bediend worden | Define user test |
| 1.4 | Subfuncties moeten in minder dan 5 sec bediend worden | Define user test |
| 1.5 | De LEDstrip moet ook zichtbaar zijn overdag | Define user test |
| 1.6 | De bedieningsring moet ingebouwd zijn in het stuur | Define user test |
| 1.7 | Het dashboard mag niet complex zijn | Define user test |
| **Deel 2** | **Swipepaneel** |
| 2.1 | Het swipepaneel zit tussen de 100 en 250 mm van de rechterkant van het stuur | Ergonomische testen |
| 2.2 | Het swipepaneel zit op een hoogte tussen de 370 en 420 mm van de basis van de versnellingspook | Ergonomische testen |
| 2.3 | Het swipepaneel zit tussen de 400 en 600 mm ten opzichte van de rechterschouder van de bestuurder | Ergonomische testen |
| **Deel 3** | **Bediening** |
| 3.1 | De bedieningsring zit op een hoek van 45° ten opzichte van het midden van het stuur | Ergonomische testen |
| 3.2 | De bedieningsring moet ingebouwd zijn in het stuur | Ergonomische testen |
| 3.3 | De bedieningsring heeft een textruu nodig zodat deze opvalt | Develop 1 |
| **Deel 4** | **Interface** |
| 4.1 | De interface heeft een aantrekkelijke layout | Develop 2 user test |
| 4.2 | De interface is makkelijk te bedienen | Develop 2 expert test |
| 4.3 | Alle functies op de interface zijn duidelijk | Develop 2 user test |
| 4.4 | De interface mag niet voor extra afleiding zorgen | Develop 2 expert test |
| 4.5 | De interface moet uitvallen na 5 seconden niet gebruikt te zijn | Develop 2 expert test |
| 4.6 | Er zijn knoppen nodig om extra functies te bedienen | Develop 2 expert test |
| 4.7 | Er zijn cijferwaardes nodig voor temperatuurinstellingen | Develop 2 expert test |
| 4.8 | Er is extra feedback nodig bij het aanpassen van een functie | Develop 2 user test |
| 4.9 | De interface moet neutraal zijn | Develop 2 user test |
| 4.10 | De interface mag een paar animaties hebben | Develop 2 user test |


## Kritische reflectie

## Bronnen

Beeckman, H. (2021) Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: "Europese regels nodig". VRT-nieuws. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/

Harrison, T. (2018) Porsche has invested in race instructor head-up displays. BBC Top-gear. https://www.topgear.com/car-news/future-tech/porsche-has-invested-race-instructor-head-displays

Staring, B. (2023) How Dashboards Contribute to Distracted Driving. AMAinsider. https://amainsider.com/dashboards-contribute-distracted-driving/

Blumstengel, B.S. (2019). Lunch & Learn Series: Office Ergonomics Done Right van [URL]([https://pdfs.semanticscholar.org/1b99/b3f87a1eef62f601bcd0519c6107bc6e018c.pdf](https://freshworks.io/office-ergonomics-done-right/))

Zhanfeng, Z.Z. (2018). Improvement and Innovation of Appearance Design of
Coffee Machine van [URL](https://pdfs.semanticscholar.org/1b99/b3f87a1eef62f601bcd0519c6107bc6e018c.pdf)




[^1]: Beeckman, H. (2021) Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: "Europese regels nodig". VRT-nieuws. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/

[^2]: Harrison, T. (2018) Porsche has invested in race instructor head-up displays. BBC Top-gear. https://www.topgear.com/car-news/future-tech/porsche-has-invested-race-instructor-head-displays

[^3]: Staring, B. (2023) How Dashboards Contribute to Distracted Driving. AMAinsider. https://amainsider.com/dashboards-contribute-distracted-driving/

[^4]: Zhanfeng, Z.Z. (2018). Improvement and Innovation of Appearance Design of
Coffee Machine van [URL](https://pdfs.semanticscholar.org/1b99/b3f87a1eef62f601bcd0519c6107bc6e018c.pdf)

[^5]: Blumstengel, B.S. (2019). Lunch & Learn Series: Office Ergonomics Done Right van [URL]([https://pdfs.semanticscholar.org/1b99/b3f87a1eef62f601bcd0519c6107bc6e018c.pdf](https://freshworks.io/office-ergonomics-done-right/))
## Bijlagen

**User-interviews:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:a553085c-a396-42ff-9095-ac709eda7349

**Literatuuronderzoek:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:efc3a025-2f44-4f5d-b754-e5034d521561

**User-tests:**
**Protocol_1:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:645fee3d-4fa2-422e-8594-370484b4276c

**Analyse testen_1:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:ec5d19d6-077b-4219-a105-6aac02018bfe

https://acrobat.adobe.com/id/urn:aaid:sc:EU:9f1b6491-b301-471e-9b52-2fa587c7459f

https://acrobat.adobe.com/id/urn:aaid:sc:EU:8f522c22-b66b-4867-83d1-d8d3f87b41f9

**Protocol_2:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:9778ee46-1f50-4665-b808-45dea4393aeb

**Protocol ergonomie**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:689d6388-93ca-42be-b201-4ee03acd4694

**Analyse ergonomie**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:d949970a-55bf-4ad1-9b35-8e741b673c48

**Protocol UX design**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:fea94173-9b86-4974-9ea0-6944431b008b

**Analyse UX design**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:e7551518-8e3a-4134-9b19-b6a5b97a3953

**Protocol UX design experts**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:6b84e563-7dd9-409d-ad3f-324a481537d3

**Analyse UX design experts**
https://acrobat.adobe.com/id/urn:aaid:sc:eu:6527ee51-fd73-4385-8622-84373df9e4fb

**Protocol Final Design**
https://ugentbe-my.sharepoint.com/:b:/g/personal/jarre_buyck_ugent_be/ERmhdY2axzlEs7fOAvOHj2sBLVCF5xtru5bPaKRAQSlxWg?e=JKfRDd

**Protocol interaction design**

**Analyse interaction design**

**Code arduino**
Zie files

**Files interfaces**

https://cloud.protopie.io/p/30c71e7211e512dd43887452

https://cloud.protopie.io/p/3f1bccdcaeeecfb6b0c15d8d

**Files swipepaneel**
https://cloud.protopie.io/p/a6c0744e0f9ae9ab82494031

**Informed consent:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:691bc083-4918-43dd-b07e-24ed760b7df1

**Storyboard:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:612a0db3-6e09-45ed-9cb1-7ffd9b538251

**Miro boards:**
https://miro.com/app/board/uXjVNfw63tw=/
