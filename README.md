# Lightcontrol
*Functies in de wagen bedienen aan de hand van een swipe-paneel en kleurengebruik.* 

*Projectteam: Jarre Buyck; Rense Vandecasteele*

Datum: 24/01/2024

## Samenvatting

Tegenwoordig zijn er veel touchscreens en knoppen aanwezig in de wagen om functies te bedienen. Deze kunnen zeer handig zijn omdat ze veel mogelijkheden bieden om functies aan te passen in de wagen. Maar door een overaanbod van knoppen of een te ingewikkelde interface kan de bestuurder rap afgeleid worden in de wagen. Door interviews af te nemen en een literatuuronderzoek uit te voeren is er besloten geweest dat bestuurders afgeleid worden omdat ze moeten multitasken en zo hun focus van de weg verliezen. 

Een oplossing die de afleiding in de wagen kan verminderen is om te werken via een bediening waarbij de bestuurder zijn ogen niet van de weg moet halen. Ons idee is om via een swipe-paneel een hoofdfunctie te bedienen zoals: muziek, navigatie, klimaat, etc. Per hoofdfunctie kan er een sub functie bediend worden. Dit gebeurt via een draaiend deel op het stuur (cilinder) die naar voor of naar achter toe kan draaien. De bestuurder weet welke functie die aan het bedienen is door lichtsignalen. Elke functie heeft zijn eigen kleur die vooraf in een app kunnen ingesteld worden. Belangrijke functies zoals de snelheid, waarschuwingssymbolen, brandstofpijl, ect. Worden weergegeven op een HUD-scherm die zich in het zicht van de bestuurder bevindt. De navigatie wordt geregeld via een AR-projectie met pijlen die de richting aangeven.

Door gebruik te maken van maar twee onderdelen en geen touchscreens wordt de afleiding in de wagen verminderd, de bestuurder moet minder denken welke knoppen er moeten ingedrukt worden om een functie te bedienen en alles info staat in het zicht van de bestuurder.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/b2dcd549-1412-4568-902f-9afe4e874f5a">



## Introductie

Het dashboard van hedendaagse wagens beschikken over touchscreens en veel knoppen om functies in de wagen te bedienen. Dit zorgt voor veel variaties van functies en maakt dat de wagen bijna alles doet wat een gsm ook kan. Dit brengt echter een probleem met zich mee. Door de gecompliceerde interfaces of overaanbod aan knoppen is er een zekere afleiding achter het stuur. De bestuurder verliest voor een moment de focus van de baan en in deze korte tijd kan er een ongeval gebeuren. (Beeckman, 2021)[^1]

Het is dus van belang om een dashboard te ontwikkelen die de focus van de bestuurder niet van de baan af haalt. Ook is het nodig om een intuïtief bedieningssysteem te maken zonder complexe touchscreens of te veel knoppen. (Staring, 2023)[^3]

De doelstelling is om een dashboard te maken die hoofdfuncties kan bedienen in minder dan vijf seconden en een sub functie kan bedienen in minder dan twee seconden. Het moet veilig zijn en het mag de focus van de bestuurder niet van de baan afhalen. In het beste geval moet de bestuurder zijn/haar ogen niet van de baan afhalen om een functie te bedienen. 
Ook is er besloten geweest dat tijdens het rijden er geen scherm mag gebruikt worden (met uitzondering van AR-projectie en HUD-systeem met beperkte informatie). Schermen hebben de neiging om de focus van de baan af te halen en zo de bestuurder in gevaar te brengen. Als de wagen volledig in stilstand is gekomen kan er een scherm bediend worden voor wat functies te regelen.  (Harrison, 2018)[^2]


## Methdologie
Het eerste semester was opgedeeld in twee grote fasen: de discovery fase en de definition fase. Zoals in de figuur hieronder te zien is werd er per fase met andere methodes het doel bereikt.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/62ab4172-664f-4525-b4a2-9a87e2a99b2f">

In de eerste deelfase (vooronderzoek) werd er nagedacht over het probleem die opgelost moest worden. Via een Literatuuronderzoek (met internetbronnen) werd er informatie opgedaan over dit onderwerp. Het was belangrijk om deze info goed te ontleden om het probleem te vinden. Na een literatuuronderzoek werd er naar GRAND STUDIO gegaan om de eisen van de opdrachtgevers beter in beeld te krijgen. Hierbij werden er heel wat dingen opgeklaard. Ten laatste werden er user interviews afgelegd. Hierbij werd er afgetoetst wat de gebruiker verwachte van een dashboard en op welke manieren de gebruikers afgeleid worden in de wagen. Al deze informatie werd gebundeld in een rapport en zo werden de eisen van het dashboard bepaald. Hierna werd uit al de bekomen info bepaald wat de belangerijkste aspecten voor het dashboard zijn. Dit werd aan de hand van een WWWWWH, persona en decision framewrok gedaan. 

De tweede deelfase bestond uit het maken van concepten. Dit startte door een brainstormsessie in de les gebruiksgericht ontwerpen. Hierbij werden er ideeën uitgewisseld en nieuwe gedachtegangen konden ook plaatsvinden. Op deze ideeën werd er een COCD-analyse toegepast om de beste ideeën in kaart te kunnen berengen. Na deze brainstormsessie werden er concepten bedacht die volstaan aan de eisen en wensen van het dashboard. Ten laatste werden de concepten gepitched aan de hand van een kleine video. 

In de laatste deelfase werd er ingegaan op het testen van de bestaande concepten. Het doel hiervan is om na te gaan of onze concepten wel effectief werken, en als deze als goed ervaren worden door de gebruikers. Eerst en vooral moesten er prototypes gemaakt worden om de concepten tastbaar te maken. Dit zijn natuurlijk maar primitieve vormen die het idee wat moeten voorstellen. Op deze eerste wave van prototypes werden er gebruikerstesten gedaan om te weten of deze wel echt werken zoals verwacht werd. Ook werd er dan de mening van de gebruikers gevraagd. De gebruikerstesten werden gedaan via the wizard of Oz testen. Hierna werden er opnieuw prototypes gemaakt met de kennis dat opgedaan is uit de eerste testen. Hierop werden er ook weer gebruikerstesten gedaan aan de hand van the wizard of Oz testing. Uiteindelijk werden er nieuwe conclusies getrokken uit deze testen waarop verder gewerkt gaat worden in het tweede semester.

## Discovery

**Doelstellingen**

In dit project wordt er gestreefd naar een car dashboard waar geen afleidingen aanwezig zijn en de focus compleet kan liggen op het rijden bij de chauffeur. Met de hedendaagse dashboards is dit niet mogelijk, dus zoeken we naar een dashboard die makkelijk te bedienen is, weinig afleiding veroorzaakt, toch comfortabel is en de noodzakelijke functies bevat. Hierbij komt dan ook nog de wensen van de gebruiker. Veel van de nieuwe functies in een auto zijn niet noodzakelijk, maar vaak behoren deze wel tot de wens van de gebruiker, dus zullen we deze ook in het dashboard plaatsen. De doelstellingen van de discovry fase zijn om te achterhalen wie de gebruiker is en wat zijn verwachtingen zijn, welke technologiën er bestaan om functies in de wagen te bedienen en welke technologiën er mogelijks kunnen gebruikt worden om de functies te bedienen.

**Materiaal & methoden**

Om te weten wat belangrijk is en welke wensen de gebruiker heeft wordt er een vooronderzoek gedaan. Ook de oorzaak van ongevallen wordt onderzocht, hierdoor kunnen we het probleem beter aanpakken en dus meer focussen op de punten die echt de oorzaak zijn.

Een groot deel van het vooronderzoek werd online uitgevoerd, er zijn al veel studies uitgevoerd naar veiligheid in de auto toe. Deze studies werden gebruikt om te weten welke factoren in een auto de oorzaak zijn van ongevallen. We kunnen dan ook concluderen dat de meeste ongevallen veroorzaakt worden door een touchscreen. Dit komt omdat touchscreens vaak een complexer systeem hebben om een doel te bereiken. Dit zorgt dat men meer stappen moet doen om een actie uit te voeren en dus langer hun aandacht weg van de baan hebben. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/af89ce06-ba4c-46b9-9646-eca88ac17652">

Naast online onderzoek werden er ook interviews met verschillende bestuurders gedaan. Bij deze interviews werd er gevraagd naar de functies van het dashboard die men gebruikt, de voorkeur tussen oudere dashboards en nieuwere, ect. Tijdens de interviews werd er ook een tabel gemaakt met functies, in deze tabel werd gevraagd welke functies men het meest gebruikt en welke functies het belangrijkst zijn. Aan de hand van deze tabel kunnen er functies uit de hedendaagse auto gehaald worden om de complexheid van het systeem te verminderen. Uit de interviews zelf werd geconcludeerd dat een dashboard met enkele knoppen de voorkeur krijgt op complexe dashboards. Veel moderne functies behoren wel tot de wensen van gebruiker zoals het verbinden van de gsm met de auto waarbij Spotify, handsfree bellen en vele andere functies bij komen. De geïnterviewden gaven ook nog enkel dingen aan die ze zelf gebruiken en handig vinden. De knoppen op een stuur waren een groot pluspunt, het DIU-scherm tussen het stuur was ook een toepassing die handig gevonden werd een groter mag.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/982a12dc-e669-48f0-9237-ae1d61595fc4">

**Resultaten**

Uit het vooronderzoek wordt er al een algemeen beeld gegeven waar de focus moet liggen. Aangezien de grootste afleiding ontstaat bij het gebruiken van touchscreens wordt er voor een screen free display gekozen, waar er zo weinig mogelijk tot geen schermen aanwezig zijn. De voorkeur naar de controls bij het stuur te houden stelt een duidelijke voorkeur naar controle over het systeem door knoppen en andere op het stuur te plaatsen. Er zal dus gestreefd worden naar een centraal bestuurssysteem waar weinig tot geen schermen aanwezig zijn en een interface op het stuur die acties binnen bepaalde onderdelen van het besturingssysteem kan voltooien. Uit onderzoek zien we ook dat tijdens het rijden met het voertuig weinig instellingen moeten aangepast worden en er zelf geen vraag is naar het kunnen sturen of lezen van berichten. De instellingsmenu van de wagen wordt vrijwel niet gebruikt en zal dus ook niet snel beschikbaar moeten zijn.

Mogelijke technologiën die gebruikt kunnen worden zijn AR-technologie om de navigatie te bedienen, verschillende knoppen op het stuur, spraaktechnologie, ect. Om zonder schermen te werken moet er een andere manier gevonden worden om feedback aan de bestuurder te geven. Dit kan gebeuren via trilfuncties, spraakassistentie, kleurengebruik, info op het windscherm, ect.

**Conclusies & implicaties**

Uit het vooronderzoek is het duidelijk geworden aan welke aspecten het dashboard moet voldoen. Het belangrijkste aspect is veiligheid, de bestuurder moet veilig het dashboard kunnen bedienen en moet zo weinig mogelijk zijn ogen van de baan afhalen. Het is ook duidelijk dat er veel verschillende functies moeten bediend worden, er zal dus een manier moeten gezocht worden om al deze functies te kunnen bedienen zonder een scherm of te veel ingewikkelde knoppen. Natuurlijk moet het dashboard ook nog in de wagen passen en moet deze een mooi afgewerkte look krijgen.
> [!NOTE]
> Designrequirements
> - De bestuurder mag niet afgeleid zijn van de weg
> - De belangrijkste functies moeten bedienbaar zijn met het dashboard
> - Er mogen geen overbodige schermen gebruikt worden

## Definition

**Doelstellingen**

De doelstelling van de definition fase was om onze concepten te testen bij gebruikers. Hieruit kan beslist worden met welk concept er verder gewerkt wordt. Ook wordt er gezien waar de sterke en zwakke punten in het gekozen concept zitten en kunnen deze nog verder uitgewerkt worden. Het hoofddoel is om te weten of het concept kan werken of niet.

**Materiaal & methoden**

Het materiaal dat gebruikt wordt zijn de zes prototypes, een PlayStation met een racesimulator, een PlayStation stuur met pedalen, een muziek box en een RGB-lamp die op afstand bediend kan worden. 
De methode die gebruikt wordt is de wizard of Oz testing. Hierbij werden er testen gedaan waarbij de interviewer op de achtergrond de omstandigheden veranderde. 

Aan de gebruiker werd er gevraagd om een traject op een racespel af te leggen (hierbij komt die wat obstakels tegen zoals bochten, tegenliggend verkeer, dieren dat over de baan heen lopen, ect.) De baan werd weergegeven via ingame navigatie op 'The Crew 2'. Eens de gebruiker de bediening gewoon is geworden van het stuur en pedalen wordt er per prototype gevraagd om een functie in te stellen (dit kan muziek, klimaatregeling, temperatuur, ect. zijn). Als de gebruiker op de juiste manier de prototypes bediend, wordt het kleur van de functie aangegeven en veranderde de omstandigheden (muziek luider/stiller, kleur feller/minder fel). Voor zowel de eerste en tweede wave van de testen werden de prototypes bij telkens drie gebruikers getest. 

Na de testen werd er nog een interview afgenomen om de mening van de gebruiker te achterhalen en ook de diepere betekenis hiervan te vinden. Hieruit worden er dan nieuwe concepten gemaakt. Achteraf werd er gekeken hoe hun rijgedrag was bij het gebruiken van de verschillende prototypes. 

**Resultaten**

Voor de eerste wave prototypes worden er drie testen gedaan (per prototype één test). Dit werd gedaan zoals de methode die hierboven beschreven staat. Bij de eerste wave werd er gekeken welke bediening de beste is. Ook werd er getoetst of het kleurengebruik en de AR-projectie voldoende duidelijk zijn.

Voor de bediening met het controlepaneel dat per vinger een andere functie aanduidt werd het meteen duidelijk dat dit niet zo intuïtief was als eerst gedacht. De gebruikers hadden moeite om de juist functie te vinden. Ook week de auto bij elke gebruiker van de baan af als dit prototype gebruikt werd. Het bleek uit de vragen achteraf dat het te complex was om de juiste vinger bij de juiste knop te houden en deze dan nog eens apart in te drukken. Ook naar het einde toe van de test was het duidelijk dat de auto van de baan bleef afwijken bij het bedienen van deze functie.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/7d59b4a3-f843-4939-91ad-e27308f22881">

Bij de draaiknop is er een ander verhaal. Het was bij elke gebruiker duidelijk dat er moest gedraaid worden aan het prototype om een naar een andere functie te bedienen. In het begin week de auto licht van de baan af maar naarmate de gebruikers gewend werden aan de bediening was er geen afwijking meer. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/066b2366-78d4-4849-ae6a-5de688a39cdf">

Voor het swipe-paneel werden dezelfde resultaten bekomen als bij de draai bediending. Het was rap duidelijk wat er verwacht werd bij het prototype en de functies werden rap gevonden. Hierbij week de auto nog minder van de baan af dan bij de voorgaande prototypes (dit heeft ook voor een deel te maken dat ze de bediening van het spel beter onder de knie kregen). Naar het einde toe van deze test week de auto ook niet meer van de baan af.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/fb8c64eb-e69b-42f1-8e96-7a473cbc84f5">

Voor het bedienen van de sub-functies werd er rap gevonden dat er een het deel op het stuur moest gedraaid worden. Dit vonden de gebruikers een zeer goed onderdeel van de prototypes. *‘Dit stimuleerd ook het tien voor twee rijgedrag!’*

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/1b3d2cf9-15eb-43f4-b61b-270253f844cc">

Ook het gebruik van een kleurenindicatie vond elke gebruiker zeer goed, sommigen vonden wel dat de kleuren nog op een ander deel kunnen terugkeren. De AR-projectie die gesimuleerd werd door de game zelf vonden de gebruikers ook heel handig. *‘Het is veel beter dan te kijken op een klein schermpje!’*. 

Er bleek ook dat over het algemeen de bedieningselementen wat dichter bij de gebruiker mochten geplaatst worden. 

Bij de tweede wave van prototypes wordt er verder gewerkt met het swipe-paneel. Een algemeen prototype werd gemaakt die in verschillende toestanden kan opgesteld worden. Hierin is er een gleuf gemaakt zodat er licht door kan schijnen van een RGB-lamp. Deze worden weer getest via the wizard of Oz testing. 
De eerste opstelling is gelijkaardig aan de het vorige swipe paneel. De bedoeling is dat de gebruiker met een hand boven of op het paneel swiped (van links naar rechts). De kleuren veranderen weer bij een andere functie. De secundaire bediening is nu ook weer via de cilinder op het stuur. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/eaadde1b-df2c-4579-8e60-73be341b974c">

De tweede opstelling is wanneer het paneel rechtstaat en de gebruiker van boven naar beneden of visa versa moet bewegen met een hand. Ook weer hier veranderen de kleuren als er een nieuwe functie bekomen is. De cilinder wordt ook hier gebruikt om de sub functie te bedienen. *‘Deze houding komt minder natuurlijk over dan de voorgaande swipebeweging.’*.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/fe7f465a-b858-46f3-998c-1faf4df89a45">

De laatste opstelling is wanneer de gebruiker van links naar recht moet swipen met een hand. Ook weer hier wordt er gebruik gemaakt van kleuren die de hoofdfunctie aanduiden. Maar in de plaats van een cilinder op het stuur wordt een draaiknop gebruikt om de secundaire functies te bedienen. Hierbij wordt er toch nog eens nagegaan of de gebruikers deze manier van werken niet beter vinden dan met de cilinder op het stuur. Hieruit bleek dat het werken via de cilinder aan het stuur een betere optie was dan een aparte draaiknop. Dit kwam doordat de gebruiker zich meer kon focussen op de baan indien de handen aan het stuur waren. *‘Met de draaiknop voel ik me minder gefocussed op de baan, ik moet ook weer mijn arm weg van het stuur bewegen.’*.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/d3fae400-ac21-4a3d-b94c-ab2b8183b0fd">

**Conclusies & implicaties**

Voor volgende prototypes zal er verder gewerkt worden met het swipe-paneel aangezien deze als beste beschouwd werd door de gebruikers. Het blijkt dat het swipen van links naar recht beter aanvoelt dan van boven naar onder toe. Ook wordt het bedienen van de secundaire functies liever gedaan via een cilinder aan het stuur dan met een aparte draaiknop. Het zal beter geïntegreerd worden in het dashboard en ook zal er een interface gemaakt worden die samengaat met de kleuren van de functies. Het kleurgebruik zal op meerdere plaatsten terugkomen en ook zal dit beter geïntegreerd worden in het dashboard. 

> [!NOTE]
> Designrequirements
> - Hoofdfuncties moeten in minder dan 3 seconden bediend worden
> - Subfuncties moeten in minder dan 5 sec bediend worden
> - De LEDstrip moet ook zichtbaar zijn overdag
> - De bedienring moet ingebouwd zijn in het stuur
> - Het dashboard mag niet complex zijn

**Bill of materials**

- Kwalitatief swipe-paneel
- Dashboard waarin prototypes kunnen geplaatst worden
- HUD-systeem
- Muziek box
- RGB lichten
-	Arduino prototypes die inspelen op het swipepaneel

## Kritische reflectie

Het basisidee kan in realiteit werken, dit is aangetoond geweest door de testen. Het eerste prototype werd meteen afgekeurd omdat het te ingewikkeld was om te gebruiken. De gebruikers verloren hun aandacht van de baan om de functie te zoeken. Het tweede en derde prototype was pakken beter dan het eerste. Hieruit blijkt dat hoe simpeler de bediening van de functies hoe beter de gebruikers zich op de weg kunnen focussen. Voor de laatste twee prototypes geldt er wel nog altijd dat ze goed moeten geïntegreerd worden in de wagen. Dit zal het een strakkere look geven en daarmee ook een hogere waarde. 

De gebruikers vonden het werken met kleuren een goed idee. Het zal belangrijk worden dat deze kleuren duidelijk overkomen bij de gebruiker. Het is ook niet de bedoeling dat de volledige wagen ingekleurd wordt dus dit zal moeten weggewerkt worden. De gebruikers vinden het ook wel belangrijk dat deze kleuren nog ergens anders terugkomen. Bij de laatste wave van prototypes was het idee om de kleuren in een led-strip te verwerken goed, maar het viel minder op dan wanneer de volledige lamp zichtbaar was. Dit duidt er nog eens op hoe belangrijk het is om de kleuren in een HUD-systeem of in andere objecten te verwerken.

Het werken via de cilinder vindt elke gebruiker heel goed, ze verkiezen dit boven andere manieren van werken. Het bevordert ook het tien voor twaalf rijden wat een goede gewoonte is om bij een ongeval de controle over de wagen beter te behouden. Wel wordt er gevraagd om dit beter in het stuur in te werken zodat het ook niet in de weg kan zitten tijdens het rijden of dat er niet per ongelijk een functie bediend wordt terwijl dit de bedoeling niet was.  

Er zouden ook nog meer functies bediend moeten worden zoals het wisselen van playlist, of een andere navigatieroute kunnen bevestigen. Het wordt dus belangrijk dat we per hoofdfunctie verschillende sub functies kunnen bedienen (zoals hoger/lager zetten van muziek, en het veranderen van playlist). Ook zal er eens moeten gekeken worden naar de beste ergonomie van het product. Momenteel zit dit nog niet goed en zorgt dit ervoor dat de user experience naar beneden wordt getrokken.

De gebruikers zouden dit verkiezen in hun wagen boven de hedendaagse manier van rijden indien het dezelfde prijs heeft en het nog wat verder uitgewerkt wordt. De gebruikers vinden dat ze minder afgeleid zijn van de baan en vinden het ook tof om op deze manier met de wagen te rijden.

## Anthopometrie

**Doelstellingen**

De doelstelling van de Anthropometrie analyse is om het ergonomisch aspect van het concept beter uit te werken en te optimaliseren. Uit deze analyse worden er opnieuw design requirements opgesteld en nieuwe iteraties gemaakt. 

**Materiaal & methoden**

Om deze analyse goed uit te voeren zijn er bepaalde materialen en methodes nodig. Er zullen nieuwe prototypes gemaakt worden die de ergonomie van de bediening beter zal kunnen bekijken. Waar in de vorige testen vooral de sensory en cognitive ergonomics bekeken werden zal er nu dieper ingegaan worden op de physical ergonomics. 

Belangrijke aspecten waar op gefocussed zal moeten worden zijn:
- Op welke plaats de bediencilinder zal moeten komen.
- Hoe de bediencilinder het beste bediendt wordt (grootte, beweging hand/vingers).
- Waar het swipepaneel zich moet bevinden.
- Hoe ver het swipepaneel zich moet bevinden.

De designmethode die zal worden gebuikt is: Design for adjustable (aangezien de zeten van de wagen per persoon kan ingesteld worden). De ergonomie zal in twee delen opgespitst worden. Eenerzijds zal de bediencilinder bekeken worden en anderzijds zal het swipepaneel bekeken worden. 

**Swipepaneel**

**Ergonomische aspecten**

Het eerste aspect dat bekeken wordt voor het swipepaneel is hoe ver het gemonteerd moet zijn t.o.v. de bestuurder. Zoals in onderstaande figuur te zien is, zou het swipepaneel best in een cirkel met een straal tussen de 394 en 508 mm komen te staan waarbij het middelpunt de rechterscouder van de bestuurder is en het eindpunte de hand van de bestuurder. (Zhanfeng, 2018)[^4] 
Een volgend ascpect is te bepalen hoe diep het paneel moet wegzitten in het dashboard. 
Ook hiervoor wordt er naar onderstaande figuur verwezen. De beste hoogte om het display te bedienen is op elbooghoogte. Dit komt meestal overeen met een hoogte tussen de 150 mm onder elbooghoogte en 250 mm boven elbooghoogte. De diepte van het dashboard (x-as) wordt kleiner naarmate het display hoger of lager komt te staan. Zo is op elbooghoogte deze nog maximaal 50cm ten opzichte van de borst. Indien de hand op 250 mm boven de elbooghoogte geposistioneerd is wordt de diepte maximaal 600 mm. En ten laatste wanneer de hand zich op 150mm onder de elbooghoogte bevind is de maximale diepte 400 mm van de borst af. (Blumstengel, 2019)[^5]

<p float="left">
  <img align="top" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/6eaba38c-1336-4648-9423-11f3994a7f10" width="500" />
  <img align="top" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/98b7f8ab-325a-456e-bf75-417ddaa0cffc" width="500" />
</p>


**Standaardderivaties en percentielen**

Via de DINBELG worden enkele maten bekeken voor de bevolking. 

Rijkdiepte: De gemiddelde rijkdiepte is 767 mm, voor 95,5% van de bevolking is de rijkdiepte in een zittende houding tussen de 667 en 867 mm. Hieruit blijkt dat 95,5% van de bevolking zeker aan de maximale opgestelde diepte van het swipepaneel geraakt. 

Schouderbreedte: De gemiddelde schouderbreedte is 438 mm, voor 95,5% van de bevolking geldt dat in een zittende houding de schouderbreedte tussen 374 en 502 mm ligt. Het swipepaneel ligt dus best op een minimale afstand van 251 mm van het midden van het stuur (502/2 mm) en een maximale afstand van 695 mm (374/2 + 508 mm) van het midden van het stuur af. 

Ellebooghoogte: De gemiddelde ellebooghoogte is 244 mm, voor 95,5% van de bevolking in een zittende houding ligt de ellebooghouding tussen 196 en 292 mm. Het swipepaneel moet dus op een hoogte van minimaal 46 mm (196 -150 mm) en maximaal 542 mm (292 +250 mm) staan t.o.v. het zitvlak. 


**Simulatie**

Vervolgens worden deze waarden in een Siemens NX simulatie geanalyseerd. Er worden verschillende situaties bekeken, het swipepaneel wordt telkens op een andere plaats gezet, de eerste manier is op een afstand van 250 mm van het stuur en op een maximale afstand van 508mm van de schouder van de bestuurder vandaan (cirkel rond shcouder), ook wordt het op schoduerhoogte gezet (100 mm boven ellebooghoogte). Zoals te zien is op onderstaande figuur is de rechter arm hoogte buiten de comfort zone, de schouderpositie zitten juist op de rand van comfortabel, dit blijft zo voor elke verschillende positie en heeft dus niks te maken met de positie van het swipepaneel. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/4404519c-4530-4c7d-b497-929f125680d1">

De volgende positie is indien het swipepaneel swipepaneel op een afstand van 394 mm ten opzichte van de schouder geplaatst wordt. De andere waarden veranderen niet, hieruit blijkt dat de arm elevation een nog slechtere comfortabilieteit heeft dan bij de vorige opstelling. De andere waarden blijven ongeveer gelijk.

Vervolgens wordt het scherm terug op de 508 mm geplaatst t.o.v. de schouder, deze keer staat het scherm op een hoogte van 250 mm boven de elleboog. Hierbij is de arm elevation nogmaals slechter dan voordien. Indien het scherm op een hoogte van 100 mm onder de elleboog geplaatst wordt is de arm elevation beter een pak beter. Hoe lager het swipepaneel staat hoe comfortabeler deze positie aanvaard wordt. Het zal moeten blijken uit gebruikerstesten welke positie de beste is bij een beweging van het stuur naar het swipepaneel heen. 

Om een swipebeweging te maken wordt het op elke positie als een comfortabele positie gezien. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/Lightcontrol-ergonomics/assets/155004668/8e0a45ee-d865-4466-b5c2-8035d5d743ae">

Voor het swipepaneel geldt dus dat dit het best tussen een afstand van 251 mm en 695 mm van het midden van het stuur zit. Het zit op een diepte tussen twee cirkels met een straal van 394 mm en 508 mm bekeken vanaf de schouder (middelpunt). Op een hoogte tussen 46 mm en 542mm ten opzichte van het zitvlak bevestigd zit. In het volgende deel zullen de gebruikerstesten beschreven worden.

**Protocol_testen_swipepaneel:** https://acrobat.adobe.com/id/urn:aaid:sc:EU:86257e14-afbf-47a2-a1fc-788938a581b1

**Resultaten**

**Swipepaneel** 

Het testprotocol voor deze test staat in de bijlage. 

**Bediencilinder**

**Het stuur**

Om het ergonomisch aspect van het bedieningswiel en de andere knoppen te bepalen word eerst gekeken naar het stuur in het algemeen. Hierbij zijn er drie zones die van belang zijn, de voorkant en de rand. Op de voorkant kunnen verschillende elementen geplaatst worden zoals knoppen of touchpads. Aan de achterkant kunnen de shiftpanelen zitten of de hendels voor richtingaanwijzers of ruitenwissers. De bedieningscilinder zou dan gemonteerd worden op de rand. De hoofdfunctie van het stuur is het besturen van de auto, dit gebeurd in het xy-vlak. Aangzien het stuur gepositioneert staat in het xy-vlak zullen extra bewegingen in het xy-vlak voor extra besturingsfuncties op het stuur. Daarom zijn duw of trek bewegingen in de z-richting de voorkeur om interacties op het stuur te plaatsen, ook beeldschermen en veegbewegingen zijn best gericht in de z-richting.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/6df68a08-4f89-4739-9d77-b8f2976434cb" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/a616de61-f869-4a70-ad78-544bf44e7f44" width="500" />
</p>

In moderne wagens wordt er veel gebruik gemaakt van knoppen op het stuur. De knoppen op het stuur bestaan meestal uit drukknopen in de Z-richting of een rollbeweging rond de x-as. Deze knoppen zorgen dat er veel functies op het stuur mogelijk zijn en maken het stuur een multifunctioneel bestuurcenter van de auto. De knoppen zullen geplaatst moeten worden zodat niet gewilde interactie vermeden word. De meeste acties op het stuur worden uitgevoerd door de duim, dit gebeurt tijdens het sturen. De andere vingers houden dan het stuur vast. De positie van de handen op het stuur zijn 10 en 2 volgens de klok. Deze positie zorgt ervoor dat bij het crashen van het voertuig de airbag de armen niet tegen het lichaam aanduwd. In het geval dat we dan een interactie uitvoeren op het stuur is de tijd die men neemt om de knop te bedienen echter korter als de knop op het stuur zit dan als de knop in het dashboard verwerkt zit. Deze interactieknoppen zouden dan ook makkelijk berijkbaar moeten zijn en als het kan blind bedienbaar zijn. Dit is simpel te bekomen door de knoppen groter te maken en een duidelijke schijding tussen de knoppen.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/ec0dd831-f80b-4bbd-8f22-da584bfc313d">

De achterkant van het stuur maakt gebruik van alle vingers naast de duim. Meervingerige trek acties zijn vaak gebruikt en simpel te gebruiken, deze zullen wel binnen het berijk van de vingers moeten liggen. In dit gedeelte worden meeste interacties gedaan terwijl het stuur vastgehouden wordt. Deze eigenschap wordt dan ook gedeeld met de andere zones op het stuur. Ook hier moeten de knoppen zo geplaatst worden dat deze niet gewilde interactie vermeiden. Op de rand van het stuur kan men ook enkele functies aanbrengen zoals bvb. knijp en draai bewegingen of veeg bewegingen. Hierbij worden de regels ook weer toegepast.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/35741724-7077-4019-b271-6601478d55ba" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/822a2c09-b479-45b2-96ed-20ce364cbd97" width="500" />
</p>

**Fielresearch**

Om de positie van de ring op het stuur te bepalen moet er bepaald worden waar de handen van de bestuurder op het stuur zelf aanwezig is en waar deze bijna nooit passeerd. Tijdens de periode van een week zullen de onderzoekers iedereen filmen waarmee men in een auto zal zitten. Hier filmen deze onderzoekers de handen en achteraf kunnen via de beelden bepaald worden waar de handen van de bestuurder zich bevinden.

<p float="left">
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/271459b4-5844-4c85-b824-13f01644f353" width="500" />
  <img align="top" src="https://github.com/rensevdc/UCD_SEM1/assets/160232035/52255704-3116-4d55-8f03-0d21ed6376b6" width="500" />
</p>

**Reseltaten Onderzoek**

Tijdens het bekijken van de beelden hebben we enkele verschillende bestuurders bekeken en zien hierbij een vast patroon bij het rijden. De rachter hand wordt vaak van het stuur gehaald. De linker hand heeft de neiging om naar boven of beneden te glijden langs het stuur. Tijdens het draaien van de auto wordt de hand op een vaste positie geplaatst of neemt doet men de standaar draai en doorgrijpen. Tijdens de draai en grijp beweging zijn er 3 punten die vastgegrepen worden: 12u, 4u en 8u. In onderstaande figuur zijn de groene gebieden degene die het meest aangeraakt worden tijdens het rijde. Naarmate de kleur naar oranje toeneemt zijn de plaatsen die minder aangeraakt worden en de witte plaatsen worden amper aangeraakt.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/966f5bd0-bb0c-47d1-ab25-8f44204000fe">

**Gebruikerstesten (N=4)**

Het voorgaande ergonomische onderzoek wordt ook nog eens getest met gebruikers. Het concept wordt weer in twee delen opgesplitst: het swipepaneel en het bedieningscilinder. De bedoeling van deze testen is om na te gaan of afstanden van het voorgaand onderzoek ook kloppen in de praktijk. 
Het prototype waarvan gebruik gemaakt wordt bestaat uit een kartonnen plaat die in de wagen geplaatsts wordt waarop er negen verdelingen staan die telkens een apparte locatie van het swipepaneel moeten aanduiden. De bedoeling is dat de gebruiker over elke positie swiped en aangeeft of dit comfortabel aanvoelt of niet. Deze waarden worden vervolgens gemapped waardoor de ideale positie gevonden wordt. Voor het bedieningscilinder wordt er op het stuur vier mogelijke locaties afgeplats met schilderstape. De gerbuiker moet ook hier aangeven op welke positie deze het bedieningscilinder het comfortableste kan bedienen. Hieronder is de schematische en de praktische uitvoering van deze test te zien. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/5b673fa3-b226-4b89-a94f-64fb850188aa">

Uit deze testen bleek voor het swipepaneel dat de meest comfortabele plaats tussen 1 en 2 ligt. Dit geldt voor elke gebruiker die gestets is geweest. Deze positie wordt gekozen omdat het dicht bij het stuur zit en de gebruikers niet teveel moet bewegen met hun arm om de functies te kunnen bedienen. Ook staat het paneel op die positie niet te hoog of te laag ten opzichte van het stuur. 
Na metingen blijkt dat het swipepaneeltussen 100 en 250 mm van de rechterkantvan het stuur moet geplaatst worden, op een hoogte tussen 370 en 420 mm ten opzichte van de basis van de versnellingspook. Op een afstand tussen de 400 en 600 mm van de rechterschouder van de bestuurder zit.

Uit de testen van het bedieningscilinder blijkt dat de beste positie voor elke gebruiker op de rechterbovenkant van het stuur plaatsvind. Deze test werd uitgevoerd met zowel links als rechtshandige gebruikers. Dit wordt als de beste positie aanvaard omdat de gerbuikers meteen na het swipen de bedieningsring kunnen manipuleren met diezelfde hand. Nadien wordt de positie op het stuur gemeten en deze ligt op een hoek van 45° tegen de klok in ten opzichte van het midden van het stuur. 

**Reflectering onderzoek**

De waarden uit de gebruikerstesten worden vergeleken met de waarden uit het voorgaande onderzoek: Tussen de 61 en 505 mm van de rechterkant van het stuur. De waarde uit de test ligt tussen dit interval en geeft een meer specifieke waarde (100-250mm). De hoogte ligt tussen de 46 en 542 mm ten opzichte van de basis van de versnellingspook. De waarde uit de testen ligt ook nu weer tussen dit interval (370-420 mm). Ook nu wordt er een beter interval gevonden. Het swipepaneel moet zich tussen de 394 en 508 mm van de rechterschouder van de gerbuiker plaatsvinden. De gesteste waarde ligt ook binnen dit interval (400-600 mm). 

Voor de bedieningsring blijkt dat de beste positie op een hoek van 45° ten opzicht van het midden van het stuur ligt. Indien deze waarde vergeleken wordt met de fieldresearch dan blijkt dat deze positie dicht bij een plaats op het stuur ligt waar de hand van de bestuurder het vaakst komt tijdens het rijden. Hierdoor kan de funtie makkelijk bediend worden zonder dat de bestuurder zijn hand moet verleggen op het stuur. Ook was de opmerking van één gebruiker dat dit ook het tien voor twee rijgedrag bevorderd wat wel een goeie aanwinst is. 

**Conclusies & implicaties**

Uit het onderzoek en de gebruikerstesten valt te concluderen dat het swipepaneel op een postie tussen de 100 en 250 mm van de rechterkant van het stuur ligt. Op een positie tussen de 370 en 420 mm van de basis van de versnellingspook ligt. En op een positie tussen de 400 en 600 mm ten opzichte van de rechterschouder van de bestuurder ligt. 

De bedieningsring ligt op een hoek van 45° aan de rechterbovenkant ten opzichte van het midden van het stuur. 

> [!NOTE]
> Designrequirements
> - Het swipepaneel zit tussen de 100 en 250 mm van de rechterkant van het stuur
> - Het swipepaneel zit op een hoogte tussen de 370 en 420 mm van de basis van de versnellingspook
> - Het swipepaneel zit tussen de 400 en 600 mm ten opzichte van de rechterschouder van de bestuurder
> - De bedienring zit op een hoek van 45° ten opzichte van het midden van het stuur
> - Het dashboard moet bedienbaar zijn voor 95% van de populatie

## Human Mind

**Doelstellingen**

De doelstelling van dit deelonderzoek is om de gebruiksvriendelijkheid en UX aspecten van het prototype in diepgang te bekijken. Aan de hand van experttesten (N=2) en gebruikerstesten (N=4) zal dit aspect van het dashboard verbeterd worden.

**Expert testen (N=2)**

Tijdens dit project zijn er twee expert testen uitgevoerd voor het dashboard interface, hieronder wordt de tweede experttest verwerkt aangezien deze veel meer feedback geeft over de werking van de interface aan de hand van de 10 heuristieken. De eerste experttesten gaven een soortgelijke uitkomst met de usertesten van het eerste interface. Hierbij werd er aangeraden om nog knoppen toe te voegen en een betere uitwerking te doen van de interface. De user testen gingen over het eerste design van de interface.

**Materiaal en methoden**

Om de expert en gebruikerstesten tot een goed eind te laten komen zijn er nieuwe prototypes nodig die meer focussen op de UX aspecten van het dashboard zoals de bediening van functies met het bediencilinder, de connectie tussen de functies en de lichtsignalen en de werking van het swipepaneel. Aan de hand van Arduino en Protopie wordt er een systeem ontwerpen waarbij er op een gsm geswiped wordt om een display aan te sturen. Indien er op de gsm geswiped wordt kan het display tussen drie situaties wisselen (Spotify (groen), Klimaatregeling (rood) en temperatuurregeling (blauw)). Voor het onderdeel van spotify kan via een potentiometer het volume van afspelende muziek aangepast worden. Voor de klimaatregeling kan er tussen vier verschillende bedieningen verwisseld worden met de potentiometer. Om de temperatuur kan ook veranderen door aan de potentiometer te draaien. 
In totaal worden er twee experttesten en vier gebruikerstesten gedaan. Voor al deze testen werd er een deel via The Wizzard of Ozz testing gewerkt en een deel via een echt werkende display en swipepaneel. 

*Werking eerste prototype interface*: https://ugentbe-my.sharepoint.com/:v:/r/personal/rense_vandecasteele_ugent_be/Documents/2%20IO/Gebruiksgericht%20ontwerpen/test_display_1.mp4?csf=1&web=1&e=6Ev8QQ

Protocol expertesten (met 10 heuristieken): https://acrobat.adobe.com/id/urn:aaid:sc:EU:e2d8e9e2-8357-4fb2-a962-19639df5569f

**Resultaten**

*Bediening Spotify:* 
Voor de bediening van Spotify blijkt dat de onderste situatie beter aanvaard wordt. Beide experts vinden deze meer herkenbaar dan de nieuwe bovenste bediening. Om de bovenste beter te maken zou de betekenis van de bollen (het wisselen van playslist) beter moeten aangegeven zijn. Het aangeven van een schaal die het volume voorsteld wordt als goed ondervonden. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/c903b55b-ee37-4de3-ad0e-1bf97365f2e2">

*Bediening temperatuurregeling:* 
De experts vinden dat het beter is om een getalwaarde af te lezen voor de tempereatuur, zo weten ze exacter hoe warm het is in de wagen. De layout van de eerste bediening vinden ze dan wel beter dan degene met de cijfers. Voor de rest is de werking van deze functie duidelijk genoeg.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/cb42de9b-68e9-4b14-8662-f442cf037c38">

*Bediening klimaatmenu:* 
Hierbij vindt de ene expert de bovenste en de andere expert de onderste bediening beter. De bovenste wordt beter ondervonden doordat het duidelijker is met de rode pijl op welke functie ze juist staan. Het zou wel beter zijn mocht de layout hiervan wat meer diepgang krijgen. De onderste bediening wordt dan aan de andere kant beter ondervonden doordat het overzichtelijker is. De nieuwe iconenen voor de voor en achterruitontdooing zijn nog wat ingewikkeld. De rest van de werking is duidelijk en geeft een meerwaarde aan de wagen.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/66156fdc-433c-43c7-8f77-9c4bdb8e7804">

Ook bij het aangeven van de intensiteit van de airco/voor of achterruit verwarming is er een meningsverschil tussen de experts. De bediening links wordt goed ervaren doordat de intensiteit niet echt een waarde nodig heeft en de bediening recht wordt beter ervaren juist doordat er wel een getalwaarde staat. Uit verdere testen zal moeten blijken welke van de twee bij andere gebruikers als beste ondervonden wordt. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/6f34e32c-83a7-4079-a37b-fa334c6f5141">

Voor de zetelverwarmingsintensiteit vinden bijde experts de bediening met drie grote balken de beste omdat de zetelverwarming vaak niet met een exacte waarde maar met een standensysteem werkt. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/c1f5b67c-604e-45f1-8d22-b997e34225f3">

*Swipepaneel:*
Het swipen wordt als natuurlijk ondervonden en de experts vinden het een goeie manier om de hoofdfuncties te bedienen. Het wordt zelf als leuk ervaren en geeft dus een meerwaarde aan de ueser experience. De experts gebruiken telkens een beweging van links naar recht of omgekeerd omdat dit het meest natuurlijk aanvoeld. Deze werking kan dus verder ingebouwd worden in een sensor of nieuw prototype.

*Bedienring:*
Het verder instellen van de subfunties met een bedienring vinden de experten ook goed en leuk om te gebruiken. Ze vinden ook dat het een veiliger gevoel geeft doordat hun handen op het stuur blijven staan. Indien dit echt zou werken (momenteel met wizzard of Oz testing) zou dit een zeer goeie functie zijn in de wagen. 

*Layout:*
De layout zou nog beter kunnen maar ze vinden het beide niet slecht. 

*Lichtfeedback:*
Door een sober interface nemen de kleuren van de LEDstrip meer de bovenhand. Het wordt rap duidelijk op welke functie de experten zich begeven voordat ze op het display kijken. Het zou goed zijn mochten de lichten niet volledig uitslaan indien de bediencilinder (potentiometer) naar beneden gedraaid wordt. 

*Afleiding:*
Over het algemeen vinden de experts dat er minder afleiding achter het stuur is. De interface wordt momenteel tamelijk groot afgebeeld waardoor het ook wel opvalt. Indien dit ingewerkt zou zitten in een HUD systeem of indien het op de voorruit geprojecteerd zou worden, denken de experts wel dat het veel minder afleiding zou geven dan hedendaagse dashboards. 

**10 heuristieken:**

Na de testen en de bevraging hebben de experts een invulblad gekregen met de 10 heuristieken op en een schaal. Er werd hen gevraagd om deze in te vullen en waar nodig ook feedback op te geven. Dit was telkens op een schaal van 1 tot en met 5 of met een schaal eerder niet - eerder wel. Naast een heuristiek staat telkens tussen haakjes welke score er gegeven is. *bv. (4-5) de eertse expert gaf een score van 4/5 en de tweede expert gaf een score van 5/5*.

*Regelmatig gebruik:* (5 - 4)
De experts vinden het een innovatief systeem om mee te werken en vinden de bediening met de cilinder en swipesysteem zeer tof. 

*onnodig complex:* (helemaal niet - helemaal niet)
De experts vinden het systeem niet complex en denken ook dat andere gebruikers er rap mee weg zullen zijn.

*gemakklijk te gebruiken:* (5 - 5)
Door een simpele bediening wordt het dashboard als eenvoudeig ervaren. Ook het swipesysteem maakt het makkelijk om functies van elkaar te onderscheiden. Het kleurengebruik geeft dan ook weer een extra bevesteging.

*Hulp nodig van een technisch persoon:* (eerder niet - eerder niet)
Het systeem makkelijk te bedienen dus de expert vinden ook niet de gebruikers hulp zouden nodig hebben van een persoon met de nodige kennis. 

*Functies goed geïntegreerd:* (4-5)
De fucnties zijn meetal duidelijk weergegeven. Er is meestal genoeg feedback indien er iets aangepast wordt.

*Rappe bediening:* (4-4)
Jongere mensen zouden er rapper mee overweg kunnen dan 50 plussers, maar dit neemt niet weg van de eenvoudigheid van het systeem. 

*Moeizaam te bedienen:* (eerder niet-eerder niet)
De exeprts vinden het niet moeizaam te bedienen.

*Zelfzeker om het systeem te bedienen:* (5-4)
Het heeft eerst wat wenning nodig maar na het eens te gebruiken wordt het systeem bedienen als goed en tof ervaren.

*Dingen leren vooraleer het systeem te gebruiken:* (eerder niet-eerder niet)
DE experts vinden het niet nodig om vooraf dingen te moeten leren om het systeem te bedienen.


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

**Gebruikerstesten (N=4)**

**Materialen en methoden**

Voor de gebruikerstesten wordt het eerste prototype aangepast met de feedback uit het eerste prototype. De aanpassingen die gemaakt worden zijn betere iconen op het klimaatmenu, een cijferwaarde voor de temperatuurregeling, een intensiteitsregeling voor airco, voorruit of achterruitregeling. Ook worden er twee knoppen toegevoegd om extra functies beter te kunnen bedienen. Er zijn extra animaties en overgangen tussen de verschillende displays. De methode die toegepast wordt om deze testen te doen is concepttesting met een diepgaand interview achterna.

Het protoype is hetzelfde opgebouwd zoals het eerste prototype maar met twee extra knoppen en een ander interface. 

**Resultaten**

*Bediening Spotify:*
Op het spotifymenu zat er een kleine bug in de code waardoor de pauzeknop maar voor één nummer werkte. Dit zorgde voor wat verwarring bij de gebruikers. De knoppen vonden ze handig te gebruiken vooral de pauze en doorspoelknop. De interface vinden ze zeer duidelijk, wel zou de pauze knop nog moeten veranderen van icoon. (1) Eén van de gebruikers klikte te lang op de knoppen waardoor deze meerdere signalen doorstuurde naar protopie en de juiste functie dus soms niet berijkt werd. Het idee om vooringestelde playlist in te voegen in een app vinden de gebruikers goed, één van de gebruikers vond dat hij zich gelimiteerd zou voelen aangezien deze vaak van playlist veranderde.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/81bc21f6-f091-4e1a-a659-05754d3d6fa0">


*Bediening temperatuurregeling:*
De interface voor de temperatuur te regelen vonden de gebruikers ook goed om te bedienen. Hierbij is het weergeven van de temperatuur op het display wel een verbetering aangezien dit nu preciezer kan geregeld worden. Er werd aangegeven dat het handiger zou zijn dat het display opent indien er aan het bedieningsring gedraaid wordt en dan na vijf seconden inactief te zijn weer weg te gaan. Ook hierbij is er een bug in de code waarbij er indien er op een knop geklikt wordt het display naar het klimaatmenu terugkeert. Bij de intenciteitsregeling is het duidelijk dat er tussen 20 standen gegaan kan worden. De witte kleur van de leds duiden duidelijk aan dat er geen temperatuur maar intenciteit geregeld wordt. 

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/0ef47f86-ab79-47e2-89ac-f716fa04a187">

*Bediening klimaatmenu:*
Nu er iconen aan het klimaatmenu toegevoegd zijn wordt het meteen duidelijk wat de bedoeling van dit menu is. De gebruikers vonden het goed dat de verschillende vakken verandereden van grootte om aan te geven op welke functie er gefloat word. Het rood worden van de vakken geeft ook een goeie feedback hierbij. Eén gebruiker vond het verloop tegen de klok in van het selecteren van de functie niet natuurlijk aanvoeld en dat het beter zou zijn om de funties met de klok mee te laten bewegen of op een andere manier. (aangegeven door de rode pijl) Het overgaan naar de temperatuurklok met de knoppen vinden de gerbuikers ook handig, maar ze zouden nog een extra bevesteging willen om aan te geven dat ze de functie veranderd hebben zoals een extra keer klikken op een knop.

<img align="center" width="600" alt="image" src="https://github.com/rensevdc/UCD_SEM1/assets/155004668/5d3c28f0-fbdf-4e63-ac49-e976b376383d">

*Knoppen:*
Bij deze test werd er met twee knoppen gewerkt. Bij de bediening met spotify werd de pauze knop rap gevonden maar door een bug werkte deze vaak niet op de juiste manier. Een tweede knop dient om van playlist te veranderen en deze werd wel op een goeie manier bediend. De gebruikers vonden het vaak moeilijk om te weten waarvoor de knoppen juist dienden, ze willen nog een extra icoon om dit aan te geven. 
Bij het klimaatmenu is het ook twijfelen welke van de twee knoppen er juist dient om over te gaan naar de temperatuurregeling. De knoppen zijn wel een aanwinst om het dashbaord te bedienen en zijn vaak een goeie extra feedback. De beste positie voor deze knoppen is dat deze allemaal recht staan volgens de gebruikers.

*Swipepaneel:*
Voor het swipepaneel (gsm) blijkt dat dit makkelijk te bedienen is. Sommige gebruikers swipen wel te rap op de gsm waardoor de LED-strip niet het juiste kleur behoud. Door een bug in protopie kan er maar lang een kant geswiped worden, de gerbuikers willen wel lang beide kanten swipen. 
Sommige gebruikers swipen maar met één vinger en andere swipen met hun volledige hand. Deze verschillende bedienmanieren kunnen de functies bedienen. 
De gebruikers vinden het een goed idee om hun gsm als database te gebruiken om een gepersonaliseerd dashboard te krijgen. Ook vinden ze het beter om een sensor in te bouwen in het swipepaneel dan dat ze hun gsm zouden leggen in op het dashboard om vervolgens zo hun functies te bedienen.

*Bedienring:*
Om de bedieningsring te begruiken werd er gerbuik gemaakt van een potentiometer. Dit sluit momenteel nog niet aan op de echte werking van de bedieningsring. De gebruikers vinden het een goeie manier om de funties in diepgang te bedienen. Er werd wel gezegd dat het beter zou zijn om met een kliksysteem te werken zodat ze een zekere tussenstanden hebben om op terug te vallen. 
Deze feature vinden de gerbuikers een meerwaarde aan het concept en zouden ze graag in hun auto willen installeren. Het geeft de bediening van het dashboard een veel aangenamere manier van werken.

*Layout:*
De layout van het display is vaak duidelijk genoeg om te weten welke interface bij welke functie hoort. De gebruikers vinden wel dat dit nog wat mooier gemaakt kan worden. 
Het gebruik van kleuren vinden ze een goeie aanvulling maar dit neemt wel de focus weg van de LEDstrip. De iconen staan momenteel tamelijk groot waardoor de aandacht eerder op de interfaces gericht zijn en minder op de ledstrip zelf om de functies te bedienen. 
De iconen die gebruikt worden zijn ook allemaal duidelijk. Er zouden nog functies kunnen bijkomen voor een GPS, telefoon opnemen/bellen en cruisecontrol.

*Lichtfeedback:*
Door het gerbuik van een display die tamelijk groot is en met dezelfde kleuren werkt als de LEDstrip vinden de gerbuikers dat deze wat op de achtergrond komt te staan. De gebruikers vinden wel dat dit een toffe extra is aan het dashboard en ze denken ook dat wanneer ze het dashboard wat gewoon zouden worden dat ze eerder zouden letten op de kleuren en minder op het display. 

*Afleiding:*
De gebruikers vinden in het algemeen dat ze door dit display minder moeten zoeken om de juiste functies te vinden. Ze kunnen ook voorhun blijven kijken waardoor hun ogen op de baan gericht blijven. 
Door de projectie op de voorruit zouden ze ook minder naar beneden moeten kijken om info af te lezen. 
De gebruikers zouden dit dashboard wel in hun wagen willen inbouwen aangezien ze het veel veiliger vinden om functies op deze manier in de wagen te bouwen. Ook zouden ze dit willen aanraden bij andere bestuurders. 
Doordat de interface alleen de nodige info toont vinden de gerbuikers dit veel minder complex om te gebruiken dan hedendaagse dashbaords. 

**Conclusies & implicaties**

De belangerijkste conclusies zijn dat het dashboard wel degelijk werkt. Uit de testen blijkt dat gebruikers dit graag gebruiken en dat het een veel minder complexe werking heeft dan hedendaagse dashboards. 
DE interface is duidelijk opgebouw maar bevat nog een paar fouten en bugs. De knoppen moeten beter werken en zouden ook een icoon mogen hebben zodat het duidelijk is waarvoor deze dienen. Over het algemeen zou de layout van het dashboard wat mooier mogen zijn. Er kunnen nog wat meer animaties bijkomen en een minder opvallend kleurengebruik zodat de focus meer ligt op de LEDstrip. 
De bediening wordt duidelijk door de potentiometer en het swipepaneel. De gebruikers vinden dit een aangename en zelf toffe manier om functies aan te passen. Wel ontbreken er nog een paar functies zoals telefoongesprekken, cruisecontrol en contacten. De bedienring zou een kliksysteem kunnen hebben zodat er teruggevallen kan worden op standaardtusseninstellingen. 
Om minder afgeleid te zijn zou het beter zijn moest het display uitvallen na vijf seconden als er geen functie bediend wordt. Ook zou het display wat kleiner mogen zijn zodat het wat minder opvalt en ook weer de LEDstrip de bovenhand kan nemen.  Bij de elke interface is er vaak nog een extra bevesteging nodig die aangeeft indier er een functie aangepast werd. 
De gebruikers zouden dit dashbaord in hun auto willen gebruiken en het zelf vooropnemen omdat het veel veiliger is dan ingewikkelde touchscreens om te complexe knoppen. Ook zouden ze dit aanraden bij andere bestuurders indien het volledig uitgewerkt is.

> [!NOTE]
> Designrequirements
> - De interface moet neutraal zijn
> - Er is extra feedback nodig bij het aanpassen van een functie
> - Het dashboard is energiezuinig
> - De interface mag een paar animaties hebben

## Interaction-design

**Meterialen en methoden**

**Resulataten**

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
| 1.6 | De bedienring moet ingebouwd zijn in het stuur | Define user test |
| 1.7 | Het dashboard mag niet complex zijn | Define user test |
| **Deel 2** | **Swipepaneel** |
| 2.1 | Het swipepaneel zit tussen de 100 en 250 mm van de rechterkant van het stuur | Ergonomische testen |
| 2.2 | Het swipepaneel zit op een hoogte tussen de 370 en 420 mm van de basis van de versnellingspook | Ergonomische testen |
| 2.3 | Het swipepaneel zit tussen de 400 en 600 mm ten opzichte van de rechterschouder van de bestuurder | Ergonomische testen |
| **Deel 3** | **Bediening** |
| 3.1 | De bedienring zit op een hoek van 45° ten opzichte van het midden van het stuur | Ergonomische testen |
| 3.2 | De bedienring moet ingebouwd zijn in het stuur | Ergonomische testen |
| 3.3 | De bedienring heeft een textruu nodig zodat deze opvalt | Develop 1 |
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

**Uitgetypte testen_1:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:ec5d19d6-077b-4219-a105-6aac02018bfe

https://acrobat.adobe.com/id/urn:aaid:sc:EU:9f1b6491-b301-471e-9b52-2fa587c7459f

https://acrobat.adobe.com/id/urn:aaid:sc:EU:8f522c22-b66b-4867-83d1-d8d3f87b41f9

**Protocol_2:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:9778ee46-1f50-4665-b808-45dea4393aeb

**Informed consent:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:691bc083-4918-43dd-b07e-24ed760b7df1

**Storyboard:**
https://acrobat.adobe.com/id/urn:aaid:sc:EU:612a0db3-6e09-45ed-9cb1-7ffd9b538251

**Miro boards:**
https://miro.com/app/board/uXjVNfw63tw=/
