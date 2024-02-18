# Lightcontrol
*Functies in de wagen bedienen aan de hand van een swipe-paneel en kleurengebruik.* 

*Projectteam: Jarre Buyck; Rense Vandecasteele*

Datum: 24/01/2024

## Samenvatting

Tegenwoordig zijn er veel touchscreens en knoppen aanwezig in de wagen om functies te bedienen. Deze kunnen zeer handig zijn omdat ze veel mogelijkheden bieden om functies aan te passen in de wagen. Maar door een overaanbod van knoppen of een te ingewikkelde interface kan de bestuurder rap afgeleid worden in de wagen. Door interviews af te nemen en een literatuuronderzoek uit te voeren is er besloten geweest dat bestuurders afgeleid worden omdat ze moeten multitasken en zo hun focus van de weg verliezen. 

Een oplossing die de afleiding in de wagen kan verminderen is om te werken via een bediening waarbij de bestuurder zijn ogen niet van de weg moet halen. Ons idee is om via een swipe-paneel een hoofdfunctie te bedienen zoals: muziek, navigatie, klimaat, etc. Per hoofdfunctie kan er een sub functie bediend worden. Dit gebeurt via een draaiend deel op het stuur (cilinder) die naar voor of naar achter toe kan draaien. De bestuurder weet welke functie die aan het bedienen is door lichtsignalen. Elke functie heeft zijn eigen kleur die vooraf in een app kunnen ingesteld worden. Belangrijke functies zoals de snelheid, waarschuwingssymbolen, brandstofpijl, ect. Worden weergegeven op een HUD-scherm die zich in het zicht van de bestuurder bevindt. De navigatie wordt geregeld via een AR-projectie met pijlen die de richting aangeven.

Door gebruik te maken van maar twee onderdelen en geen touchscreens wordt de afleiding in de wagen verminderd, de bestuurder moet minder denken welke knoppen er moeten ingedrukt worden om een functie te bedienen en alles info staat in het zicht van de bestuurder.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/017b51a8-62d6-4a8c-a5de-3ad573b60dbc)


## Introductie

Het dashboard van hedendaagse wagens beschikken over touchscreens en veel knoppen om functies in de wagen te bedienen. Dit zorgt voor veel variaties van functies en maakt dat de wagen bijna alles doet wat een gsm ook kan. Dit brengt echter een probleem met zich mee. Door de gecompliceerde interfaces of overaanbod aan knoppen is er een zekere afleiding achter het stuur. De bestuurder verliest voor een moment de focus van de baan en in deze korte tijd kan er een ongeval gebeuren. (Beeckman, 2021)[^1]

Het is dus van belang om een dashboard te ontwikkelen die de focus van de bestuurder niet van de baan af haalt. Ook is het nodig om een intuïtief bedieningssysteem te maken zonder complexe touchscreens of te veel knoppen. (Staring, 2023)[^3]

De doelstelling is om een dashboard te maken die hoofdfuncties kan bedienen in minder dan vijf seconden en een sub functie kan bedienen in minder dan twee seconden. Het moet veilig zijn en het mag de focus van de bestuurder niet van de baan afhalen. In het beste geval moet de bestuurder zijn/haar ogen niet van de baan afhalen om een functie te bedienen. 
Ook is er besloten geweest dat tijdens het rijden er geen scherm mag gebruikt worden (met uitzondering van AR-projectie en HUD-systeem met beperkte informatie). Schermen hebben de neiging om de focus van de baan af te halen en zo de bestuurder in gevaar te brengen. Als de wagen volledig in stilstand is gekomen kan er een scherm bediend worden voor wat functies te regelen.  (Harrison, 2018)[^2]


## Methdologie
Het eerste semester was opgedeeld in twee grote fasen: de discovery fase en de definition fase. Zoals in de figuur hieronder te zien is werd er per fase met andere methodes het doel bereikt.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/62ab4172-664f-4525-b4a2-9a87e2a99b2f)

In de eerste deelfase (vooronderzoek) werd er nagedacht over het probleem die opgelost moest worden. Via een Literatuuronderzoek (met internetbronnen) werd er informatie opgedaan over dit onderwerp. Het was belangrijk om deze info goed te ontleden om het probleem te vinden. Na een literatuuronderzoek werd er naar GRAND STUDIO gegaan om de eisen van de opdrachtgevers beter in beeld te krijgen. Hierbij werden er heel wat dingen opgeklaard. Ten laatste werden er user interviews afgelegd. Hierbij werd er afgetoetst wat de gebruiker verwachte van een dashboard en op welke manieren de gebruikers afgeleid worden in de wagen. Al deze informatie werd gebundeld in een rapport en zo werden de eisen van het dashboard bepaald. Hierna werd uit al de bekomen info bepaald wat de belangerijkste aspecten voor het dashboard zijn. Dit werd aan de hand van een WWWWWH, persona en decision framewrok gedaan. 

De tweede deelfase bestond uit het maken van concepten. Dit startte door een brainstormsessie in de les gebruiksgericht ontwerpen. Hierbij werden er ideeën uitgewisseld en nieuwe gedachtegangen konden ook plaatsvinden. Op deze ideeën werd er een COCD-analyse toegepast om de beste ideeën in kaart te kunnen berengen. Na deze brainstormsessie werden er concepten bedacht die volstaan aan de eisen en wensen van het dashboard. Ten laatste werden de concepten gepitched aan de hand van een kleine video. 

In de laatste deelfase werd er ingegaan op het testen van de bestaande concepten. Het doel hiervan is om na te gaan of onze concepten wel effectief werken, en als deze als goed ervaren worden door de gebruikers. Eerst en vooral moesten er prototypes gemaakt worden om de concepten tastbaar te maken. Dit zijn natuurlijk maar primitieve vormen die het idee wat moeten voorstellen. Op deze eerste wave van prototypes werden er gebruikerstesten gedaan om te weten of deze wel echt werken zoals verwacht werd. Ook werd er dan de mening van de gebruikers gevraagd. De gebruikerstesten werden gedaan via the wizard of Oz testen. Hierna werden er opnieuw prototypes gemaakt met de kennis dat opgedaan is uit de eerste testen. Hierop werden er ook weer gebruikerstesten gedaan aan de hand van the wizard of Oz testing. Uiteindelijk werden er nieuwe conclusies getrokken uit deze testen waarop verder gewerkt gaat worden in het tweede semester.

## Discovery

**Doelstellingen**

In dit project wordt er gestreefd naar een car dashboard waar geen afleidingen aanwezig zijn en de focus compleet kan liggen op het rijden bij de chauffeur. Met de hedendaagse dashboards is dit niet mogelijk, dus zoeken we naar een dashboard die makkelijk te bedienen is, weinig afleiding veroorzaakt, toch comfortabel is en de noodzakelijke functies bevat. Hierbij komt dan ook nog de wensen van de gebruiker. Veel van de nieuwe functies in een auto zijn niet noodzakelijk, maar vaak behoren deze wel tot de wens van de gebruiker, dus zullen we deze ook in het dashboard plaatsen. De doelstellingen van de discovry fase zijn om te achterhalen wie de gebruiker is en wat zijn verwachtingen zijn, welke technologiën er bestaan om functies in de wagen te bedienen en welke technologiën er mogelijks kunnen gebruikt worden om de functies te bedienen.

**Materiaal & methoden**

Om te weten wat belangrijk is en welke wensen de gebruiker heeft wordt er een vooronderzoek gedaan. Ook de oorzaak van ongevallen wordt onderzocht, hierdoor kunnen we het probleem beter aanpakken en dus meer focussen op de punten die echt de oorzaak zijn.

Een groot deel van het vooronderzoek werd online uitgevoerd, er zijn al veel studies uitgevoerd naar veiligheid in de auto toe. Deze studies werden gebruikt om te weten welke factoren in een auto de oorzaak zijn van ongevallen. We kunnen dan ook concluderen dat de meeste ongevallen veroorzaakt worden door een touchscreen. Dit komt omdat touchscreens vaak een complexer systeem hebben om een doel te bereiken. Dit zorgt dat men meer stappen moet doen om een actie uit te voeren en dus langer hun aandacht weg van de baan hebben. 

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/102b6195-8bce-4e45-9608-ad5c5c33ef0d)

Naast online onderzoek werden er ook interviews met verschillende bestuurders gedaan. Bij deze interviews werd er gevraagd naar de functies van het dashboard die men gebruikt, de voorkeur tussen oudere dashboards en nieuwere, ect. Tijdens de interviews werd er ook een tabel gemaakt met functies, in deze tabel werd gevraagd welke functies men het meest gebruikt en welke functies het belangrijkst zijn. Aan de hand van deze tabel kunnen er functies uit de hedendaagse auto gehaald worden om de complexheid van het systeem te verminderen. Uit de interviews zelf werd geconcludeerd dat een dashboard met enkele knoppen de voorkeur krijgt op complexe dashboards. Veel moderne functies behoren wel tot de wensen van gebruiker zoals het verbinden van de gsm met de auto waarbij Spotify, handsfree bellen en vele andere functies bij komen. De geïnterviewden gaven ook nog enkel dingen aan die ze zelf gebruiken en handig vinden. De knoppen op een stuur waren een groot pluspunt, het DIU-scherm tussen het stuur was ook een toepassing die handig gevonden werd een groter mag.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/f601ad05-5cfb-4430-8127-5bc2b1f7afb7)

**Resultaten**

Uit het vooronderzoek wordt er al een algemeen beeld gegeven waar de focus moet liggen. Aangezien de grootste afleiding ontstaat bij het gebruiken van touchscreens wordt er voor een screen free display gekozen, waar er zo weinig mogelijk tot geen schermen aanwezig zijn. De voorkeur naar de controls bij het stuur te houden stelt een duidelijke voorkeur naar controle over het systeem door knoppen en andere op het stuur te plaatsen. Er zal dus gestreefd worden naar een centraal bestuurssysteem waar weinig tot geen schermen aanwezig zijn en een interface op het stuur die acties binnen bepaalde onderdelen van het besturingssysteem kan voltooien. Uit onderzoek zien we ook dat tijdens het rijden met het voertuig weinig instellingen moeten aangepast worden en er zelf geen vraag is naar het kunnen sturen of lezen van berichten. De instellingsmenu van de wagen wordt vrijwel niet gebruikt en zal dus ook niet snel beschikbaar moeten zijn.

Mogelijke technologiën die gebruikt kunnen worden zijn AR-technologie om de navigatie te bedienen, verschillende knoppen op het stuur, spraaktechnologie, ect. Om zonder schermen te werken moet er een andere manier gevonden worden om feedback aan de bestuurder te geven. Dit kan gebeuren via trilfuncties, spraakassistentie, kleurengebruik, info op het windscherm, ect.

**Conclusies & implicaties**

Uit het vooronderzoek is het duidelijk geworden aan welke aspecten het dashboard moet voldoen. Het belangrijkste aspect is veiligheid, de bestuurder moet veilig het dashboard kunnen bedienen en moet zo weinig mogelijk zijn ogen van de baan afhalen. Het is ook duidelijk dat er veel verschillende functies moeten bediend worden, er zal dus een manier moeten gezocht worden om al deze functies te kunnen bedienen zonder een scherm of te veel ingewikkelde knoppen. Natuurlijk moet het dashboard ook nog in de wagen passen en moet deze een mooi afgewerkte look krijgen.

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

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/7d59b4a3-f843-4939-91ad-e27308f22881)

Bij de draaiknop is er een ander verhaal. Het was bij elke gebruiker duidelijk dat er moest gedraaid worden aan het prototype om een naar een andere functie te bedienen. In het begin week de auto licht van de baan af maar naarmate de gebruikers gewend werden aan de bediening was er geen afwijking meer. 

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/066b2366-78d4-4849-ae6a-5de688a39cdf)

Voor het swipe-paneel werden dezelfde resultaten bekomen als bij de draai bediending. Het was rap duidelijk wat er verwacht werd bij het prototype en de functies werden rap gevonden. Hierbij week de auto nog minder van de baan af dan bij de voorgaande prototypes (dit heeft ook voor een deel te maken dat ze de bediening van het spel beter onder de knie kregen). Naar het einde toe van deze test week de auto ook niet meer van de baan af.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/fb8c64eb-e69b-42f1-8e96-7a473cbc84f5)

Voor het bedienen van de sub-functies werd er rap gevonden dat er een het deel op het stuur moest gedraaid worden. Dit vonden de gebruikers een zeer goed onderdeel van de prototypes. *‘Dit stimuleerd ook het tien voor twee rijgedrag!’*

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/1b3d2cf9-15eb-43f4-b61b-270253f844cc)

Ook het gebruik van een kleurenindicatie vond elke gebruiker zeer goed, sommigen vonden wel dat de kleuren nog op een ander deel kunnen terugkeren. De AR-projectie die gesimuleerd werd door de game zelf vonden de gebruikers ook heel handig. *‘Het is veel beter dan te kijken op een klein schermpje!’*. 

Er bleek ook dat over het algemeen de bedieningselementen wat dichter bij de gebruiker mochten geplaatst worden. 

Bij de tweede wave van prototypes wordt er verder gewerkt met het swipe-paneel. Een algemeen prototype werd gemaakt die in verschillende toestanden kan opgesteld worden. Hierin is er een gleuf gemaakt zodat er licht door kan schijnen van een RGB-lamp. Deze worden weer getest via the wizard of Oz testing. 
De eerste opstelling is gelijkaardig aan de het vorige swipe paneel. De bedoeling is dat de gebruiker met een hand boven of op het paneel swiped (van links naar rechts). De kleuren veranderen weer bij een andere functie. De secundaire bediening is nu ook weer via de cilinder op het stuur. 

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/eaadde1b-df2c-4579-8e60-73be341b974c)

De tweede opstelling is wanneer het paneel rechtstaat en de gebruiker van boven naar beneden of visa versa moet bewegen met een hand. Ook weer hier veranderen de kleuren als er een nieuwe functie bekomen is. De cilinder wordt ook hier gebruikt om de sub functie te bedienen. *‘Deze houding komt minder natuurlijk over dan de voorgaande swipebeweging.’*.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/fe7f465a-b858-46f3-998c-1faf4df89a45)

De laatste opstelling is wanneer de gebruiker van links naar recht moet swipen met een hand. Ook weer hier wordt er gebruik gemaakt van kleuren die de hoofdfunctie aanduiden. Maar in de plaats van een cilinder op het stuur wordt een draaiknop gebruikt om de secundaire functies te bedienen. Hierbij wordt er toch nog eens nagegaan of de gebruikers deze manier van werken niet beter vinden dan met de cilinder op het stuur. Hieruit bleek dat het werken via de cilinder aan het stuur een betere optie was dan een aparte draaiknop. Dit kwam doordat de gebruiker zich meer kon focussen op de baan indien de handen aan het stuur waren. *‘Met de draaiknop voel ik me minder gefocussed op de baan, ik moet ook weer mijn arm weg van het stuur bewegen.’*.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/d3fae400-ac21-4a3d-b94c-ab2b8183b0fd)

**Conclusies & implicaties**

Voor volgende prototypes zal er verder gewerkt worden met het swipe-paneel aangezien deze als beste beschouwd werd door de gebruikers. Het blijkt dat het swipen van links naar recht beter aanvoelt dan van boven naar onder toe. Ook wordt het bedienen van de secundaire functies liever gedaan via een cilinder aan het stuur dan met een aparte draaiknop. Het zal beter geïntegreerd worden in het dashboard en ook zal er een interface gemaakt worden die samengaat met de kleuren van de functies. Het kleurgebruik zal op meerdere plaatsten terugkomen en ook zal dit beter geïntegreerd worden in het dashboard. 

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

Ten laatste werden er design requirements opgesetld voor het dashboard waartoe volgende ontwerpen aan moeten voldoen.

![image](https://github.com/rensevdc/UCD_SEM1/assets/155004668/bcab20b6-9264-4830-868c-80df155946e7)


## Bronnen

Beeckman, H. (2021) Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: "Europese regels nodig". VRT-nieuws. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/

Harrison, T. (2018) Porsche has invested in race instructor head-up displays. BBC Top-gear. https://www.topgear.com/car-news/future-tech/porsche-has-invested-race-instructor-head-displays

Staring, B. (2023) How Dashboards Contribute to Distracted Driving. AMAinsider. https://amainsider.com/dashboards-contribute-distracted-driving/

[^1]: Beeckman, H. (2021) Aanraakschermen in je auto bedienen drie keer gevaarlijker dan rijden onder invloed: "Europese regels nodig". VRT-nieuws. https://www.vrt.be/vrtnws/nl/2021/03/11/aanraakschermen-in-je-auto-bedienen-drie-keer-gevaarlijker-dan-r/

[^2]: Harrison, T. (2018) Porsche has invested in race instructor head-up displays. BBC Top-gear. https://www.topgear.com/car-news/future-tech/porsche-has-invested-race-instructor-head-displays

[^3]: Staring, B. (2023) How Dashboards Contribute to Distracted Driving. AMAinsider. https://amainsider.com/dashboards-contribute-distracted-driving/

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
