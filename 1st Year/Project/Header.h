#pragma warning (disable : 4018)
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "Calendar.h"
#include "Border.h"

#define clrscr(); system("cls");
#define getch(); system("pause");

#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15

void SetColorAndBackground(int ForgC, int BackC = 0)
{
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

int index[80];
int recommendIndex[80];
int ctr2 = 0;

class Plant {
private:
	std::string name;
	std::string sciName;
	std::string water;
	int waterDelay;
	std::string light;
	bool isLight;
	std::string humidity;
	bool highHumid;
	std::string fertilizer;
	double fertilizerDelay;
	bool isToxic;
	std::string toxicInfo;
	std::string facts;

public:
	void setName(std::string c_name) {
		name = c_name;
	}

	std::string getName() {
		return name;
	}

	void setSciName(std::string c_sciName) {
		sciName = c_sciName;
	}

	std::string getSciName() {
		return sciName;
	}

	void setWater(std::string c_water) {
		water = c_water;
	}

	std::string getWater() {
		return water;
	}

	void setWaterDelay(int c_waterDelay) {
		waterDelay = c_waterDelay;
	}

	int getWaterDelay() {
		return waterDelay;
	}

	void setLight(std::string c_light) {
		light = c_light;
	}

	std::string getLight() {
		return light;
	}

	void setIsLight(bool c_isLight) {
		isLight = c_isLight;
	}

	bool getIsLight() {
		return isLight;
	}

	void setHumidity(std::string c_humidity) {
		humidity = c_humidity;
	}

	std::string getHumidity() {
		return humidity;
	}

	void setHighHumid(bool c_highHumid) {
		highHumid = c_highHumid;
	}

	bool getHighHumid() {
		return highHumid;
	}

	void setFertilizer(std::string c_fertilizer) {
		fertilizer = c_fertilizer;
	}

	std::string getFertilizer() {
		return fertilizer;
	}

	void setFertilizerDelay(double c_fertilizerDelay) {
		fertilizerDelay = c_fertilizerDelay;
	}

	double getFertilizerDelay() {
		return fertilizerDelay;
	}

	void setIsToxic(bool c_IsToxic) {
		isToxic = c_IsToxic;
	}

	bool getIsToxic() {
		return isToxic;
	}

	void setToxicInfo(std::string c_ToxicInfo) {
		toxicInfo = c_ToxicInfo;
	}

	std::string getToxicInfo() {
		return toxicInfo;
	}

	void setFacts(std::string c_facts) {
		facts = c_facts;
	}

	std::string getFacts() {
		return facts;
	}
};

Plant Ornamental[10];
Plant Flowering_Vegetable[5];
Plant IndoorTrees[7];
Plant Succulents[4];
Plant Herbs_LeafyGreens[8];
Plant Hanging[6];
Plant All[40];

using namespace std;

void assignOrnamental() {
	//Ornamental Plants
	Ornamental[0].setName("Lucky Bamboo");
	Ornamental[0].setSciName("Dracaena Sanderiana");
	Ornamental[0].setWater("1 inch of water per week");
	Ornamental[0].setWaterDelay(3);
	Ornamental[0].setLight("Partial Shade, do not place under direct sunlight");
	Ornamental[0].setIsLight(true);
	Ornamental[0].setHumidity("Keep the soil moist. Mist it every 2 days");
	Ornamental[0].setHighHumid(true);
	Ornamental[0].setFertilizer("Weak liquid fertilizer every month");
	Ornamental[0].setFertilizerDelay(1);
	Ornamental[0].setIsToxic(false);
	Ornamental[0].setToxicInfo("Non-Toxic");
	Ornamental[0].setFacts("Bamboo is a perennial evergreen that is part of the grass family (a very tall and woody \n\tgrass that is). Similar to grass, bamboo is characterized by a jointed stem called a culm.");

	Ornamental[1].setName("Peace Lily");
	Ornamental[1].setSciName("Spathiphyllum");
	Ornamental[1].setWater("Keep soil consistently moist but not soggy");
	Ornamental[1].setWaterDelay(3);
	Ornamental[1].setLight("Can survive low light but will bloom in bright indirect light.");
	Ornamental[1].setIsLight(true);
	Ornamental[1].setHumidity("Enjoys high humidity.");
	Ornamental[1].setHighHumid(true);
	Ornamental[1].setFertilizer("Fertilize every after 6 months");
	Ornamental[1].setFertilizerDelay(6);
	Ornamental[1].setIsToxic(true);
	Ornamental[1].setToxicInfo("Contains compound which can make tongue swell and people vomit when ingested. Keep away \n\tfrom kids and pets");
	Ornamental[1].setFacts("Peace lilies are sturdy plants with glossy, dark green oval leaves that narrow to a point. \n\tThe leaves rise directly from the soil. These plants also periodically produce lightly fragrant \n\twhite flowers that resemble calla lilies.");

	Ornamental[2].setName("Spider Plant");
	Ornamental[2].setSciName("Chlorophytum comosum");
	Ornamental[2].setWater("Wait to dry out between watering. Too much watering can lead to root rot");
	Ornamental[2].setWaterDelay(4);
	Ornamental[2].setLight("Bright Indirect light");
	Ornamental[2].setIsLight(true);
	Ornamental[2].setHumidity("Brown leaf tips may indicate the air is too dry, so mist regularly");
	Ornamental[2].setHighHumid(true);
	Ornamental[2].setFertilizer("Every 2 weeks");
	Ornamental[2].setFertilizerDelay(0.5);
	Ornamental[2].setIsToxic(false);
	Ornamental[2].setToxicInfo("Non-Toxic");
	Ornamental[2].setFacts("Spider Plant (Chlorophytum comosum) is one of the most useful and highly ornamental indoor \n\tplants. Actually not exactly that, but some of its variegated leaves varieties, of which the most \n\tcommon and recognizable of all is Chlorophytum comosum ‘Variegatum’.");

	Ornamental[3].setName("Red Lipstick | Red Siam | Dona Carmen | Brilliant | Silver Queen");
	Ornamental[3].setSciName("Aglaonnema");
	Ornamental[3].setWater("Keep the soil moist but not soggy. Let the soil dry before watering.");
	Ornamental[3].setWaterDelay(3);
	Ornamental[3].setLight("Likes bright and indirect light to keep the color bright but direct sunlight will burn its leaves.");
	Ornamental[3].setIsLight(true);
	Ornamental[3].setHumidity("Likes high humidity but can survive low");
	Ornamental[3].setHighHumid(true);
	Ornamental[3].setFertilizer("Fertilize once a month from spring to summer");
	Ornamental[3].setFertilizerDelay(1);
	Ornamental[3].setIsToxic(true);
	Ornamental[3].setToxicInfo("Toxic to humans and pets");
	Ornamental[3].setFacts("These are evergreen perennials with stems growing erect or decumbent and creeping. Stems that grow \n\talong the ground may root at the nodes. There is generally a crown of wide leaf blades \n\twhich in wild species are often variegated with silver and green coloration.");

	Ornamental[4].setName("Alocasia");
	Ornamental[4].setSciName("Alocasia");
	Ornamental[4].setWater("Likes warm weather so it’s best to be watered with warm water");
	Ornamental[4].setWaterDelay(4);
	Ornamental[4].setLight("Bright light to partial shade");
	Ornamental[4].setIsLight(true);
	Ornamental[4].setHumidity("Likes above average humidity and very moist condition. mist frequently");
	Ornamental[4].setHighHumid(true);
	Ornamental[4].setFertilizer("Apply a slow release fertilizer once a month");
	Ornamental[4].setFertilizerDelay(1);
	Ornamental[4].setIsToxic(true);
	Ornamental[4].setToxicInfo("Harmful if eaten. Skin and eye irritant");
	Ornamental[4].setFacts("Alocasia plants make a statement with their bold, arrow-head shaped leaves and tall stems. Some \n\tAlocasia plants can grow to be 8-10 feet tall.");

	Ornamental[5].setName("Horsetail");
	Ornamental[5].setSciName("Equisetum hyemale");
	Ornamental[5].setWater("In terms of moisture level in the soil, horsetail prefers a soil that is at least moderately wet");
	Ornamental[5].setWaterDelay(3);
	Ornamental[5].setLight("Full sun to part shade");
	Ornamental[5].setIsLight(true);
	Ornamental[5].setHumidity("Horsetail plants prefer high humidity for several hours a day");
	Ornamental[5].setHighHumid(true);
	Ornamental[5].setFertilizer("Fertilizing isn’t necessary since they don’t like rich soil");
	Ornamental[5].setFertilizerDelay(0);
	Ornamental[5].setIsToxic(false);
	Ornamental[5].setToxicInfo("Horsetail is not toxic to humans");
	Ornamental[5].setFacts("Horsetails are very primitive plants belonging to the genus Equisetum, vascular plants that reproduce \n\tby spores in a similar fashion to ferns. The plant consists of long, hollow, \n\tnarrow stem segments with minisule, non-photosynthetic leaves");

	Ornamental[6].setName("Mayana");
	Ornamental[6].setSciName("Coleus blumei");
	Ornamental[6].setWater("Keep soil moist. Water frequently.");
	Ornamental[6].setWaterDelay(2);
	Ornamental[6].setLight("Full to partial shade");
	Ornamental[6].setIsLight(true);
	Ornamental[6].setHumidity("High Humidity");
	Ornamental[6].setHighHumid(true);
	Ornamental[6].setFertilizer("Although it’s not required, the plants can be given a boost of half-strength liquid fertilizer \n\tduring their active growth in spring and summer.");
	Ornamental[6].setFertilizerDelay(0);
	Ornamental[6].setIsToxic(true);
	Ornamental[6].setToxicInfo("May be toxic to animals");
	Ornamental[6].setFacts("They have some of the most stunningly colored foliage—in combinations of green, yellow, pink, \n\tred, maroon, etc. Coleus also have a wide variety of leaf sizes and overall shapes");

	Ornamental[7].setName("Caladium");
	Ornamental[7].setSciName("Caladium");
	Ornamental[7].setWater("Keep evenly moist in bloom period. Never let the plant dry out.");
	Ornamental[7].setWaterDelay(2);
	Ornamental[7].setLight("Indirect light (indoors), full to partial shade (outdoors)");
	Ornamental[7].setIsLight(true);
	Ornamental[7].setHumidity("Keep the humidity as high as is practical.");
	Ornamental[7].setHighHumid(true);
	Ornamental[7].setFertilizer("Fertilize the plant weekly during the growing season with liquid fertilizer or use slow-\n\trelease pellets.");
	Ornamental[7].setFertilizerDelay(0.25);
	Ornamental[7].setIsToxic(true);
	Ornamental[7].setToxicInfo("Toxic to people and pets");
	Ornamental[7].setFacts("Caladiums are tropical perennials that have almost unparalleled foliage and make showy houseplants.");

	Ornamental[8].setName("Rex Begonia");
	Ornamental[8].setSciName("Begonia rex-cultorum");
	Ornamental[8].setWater("Water when the soil or pot feels dry.");
	Ornamental[8].setWaterDelay(4);
	Ornamental[8].setLight("Part shade to full shade; bright filtered light when grown indoors");
	Ornamental[8].setIsLight(true);
	Ornamental[8].setHumidity("Requires high humidity.");
	Ornamental[8].setHighHumid(true);
	Ornamental[8].setFertilizer("You can feed your potted plants monthly with any houseplant food.");
	Ornamental[8].setFertilizerDelay(1);
	Ornamental[8].setIsToxic(true);
	Ornamental[8].setToxicInfo("Mildly toxic to humans and animals");
	Ornamental[8].setFacts("These tropical plants have been bred to have unusual markings, leaf shapes, and colors. Many are \n\tvariegated in shades of green, red, pink, purple, silver, and brown.");

	Ornamental[9].setName("Rattlesnake Plant");
	Ornamental[9].setSciName("Calathea");
	Ornamental[9].setWater("Water regularly to maintain moist soil (not soggy)");
	Ornamental[9].setWaterDelay(2);
	Ornamental[9].setLight("Partial sunlight, full shade");
	Ornamental[9].setIsLight(true);
	Ornamental[9].setHumidity("Requires high humidity. Best placed in humid places");
	Ornamental[9].setHighHumid(true);
	Ornamental[9].setFertilizer("Fertilize with liquid fertilizer once a month at half strength.");
	Ornamental[9].setIsToxic(false);
	Ornamental[9].setToxicInfo("Non-toxic");
	Ornamental[9].setFacts("Calathea have a reputation as greenhouse plants, and it's easy to see why. They're highly sensitive \n\tto chilly temperatures and grow best when kept in the warm, humid environment \n\tgreenhouses often provide");
}
void assignFlowerVegetable() {
	Flowering_Vegetable[0].setName("Tomato");
	Flowering_Vegetable[0].setSciName("Solanum lycopersicum");
	Flowering_Vegetable[0].setWater("Keep water moist. Water every morning.");
	Flowering_Vegetable[0].setWaterDelay(1);
	Flowering_Vegetable[0].setLight("Full Sun");
	Flowering_Vegetable[0].setIsLight(false);
	Flowering_Vegetable[0].setHumidity("Requires high humidity");
	Flowering_Vegetable[0].setHighHumid(true);
	Flowering_Vegetable[0].setFertilizer("Apply organic fertilizer every 2 weeks");
	Flowering_Vegetable[0].setFertilizerDelay(0.5);
	Flowering_Vegetable[0].setIsToxic(false);
	Flowering_Vegetable[0].setToxicInfo("Non-toxic");
	Flowering_Vegetable[0].setFacts("Tomato, flowering plant of the nightshade family (Solanaceae), cultivated extensively \n\tfor its edible fruits.");

	Flowering_Vegetable[1].setName("Chili Pepper");
	Flowering_Vegetable[1].setSciName("Capsicum annuum");
	Flowering_Vegetable[1].setWater("Keep soil constantly moist but not soaking wet. Water every other day or every third day.");
	Flowering_Vegetable[1].setWaterDelay(2);
	Flowering_Vegetable[1].setLight("Full Sun to partial shade");
	Flowering_Vegetable[1].setIsLight(true);
	Flowering_Vegetable[1].setHumidity("50% to 70% humidity");
	Flowering_Vegetable[1].setHighHumid(false);
	Flowering_Vegetable[1].setFertilizer("No Information Available");
	Flowering_Vegetable[1].setFertilizerDelay(0);
	Flowering_Vegetable[1].setIsToxic(false);
	Flowering_Vegetable[1].setToxicInfo("Non-toxic");
	Flowering_Vegetable[1].setFacts("Chili pepper, any of several species and cultivars of very hot, pungent peppers in the \n\tnightshade family (Solanaceae)");

	Flowering_Vegetable[2].setName("Santan");
	Flowering_Vegetable[2].setSciName("Ixora coccinea");
	Flowering_Vegetable[2].setWater("Keep soil consistently moist. 1 inch of soil isn’t allowed to dry out.");
	Flowering_Vegetable[2].setWaterDelay(1);
	Flowering_Vegetable[2].setLight("Full Sun");
	Flowering_Vegetable[2].setIsLight(false);
	Flowering_Vegetable[2].setHumidity("Like high humidity");
	Flowering_Vegetable[2].setHighHumid(true);
	Flowering_Vegetable[2].setFertilizer("Feed your ixora plant in the spring with slow-release fertilizer pellets, or\n\tweekly during its growing season with a liquid fertilizer.");
	Flowering_Vegetable[2].setFertilizerDelay(0.25);
	Flowering_Vegetable[2].setIsToxic(false);
	Flowering_Vegetable[2].setToxicInfo("Non-toxic");
	Flowering_Vegetable[2].setFacts("Native to Asia, ixora plants are actually small shrubs that grow in subtropical \n\tregions, making them unsuitable for outdoor growth in much of the country. Started and grown \n\tyear-round indoors, ixora plants feature large clusters of red, yellow, white, or orange flowers that \n\temerge like puffballs from the evergreen leaves continuously throughout the year.");

	Flowering_Vegetable[3].setName("Okra");
	Flowering_Vegetable[3].setSciName("Abelmoschus esculentus");
	Flowering_Vegetable[3].setWater("Once okra plants are established, they can handle brief dry spells. For best yields, \n\twater well at least every seven to 10 days.");
	Flowering_Vegetable[3].setWaterDelay(4);
	Flowering_Vegetable[3].setLight("Full Sun");
	Flowering_Vegetable[3].setIsLight(false);
	Flowering_Vegetable[3].setHumidity("It excels in dry conditions but also grows perfectly well in humid summer climates.");
	Flowering_Vegetable[3].setHighHumid(false);
	Flowering_Vegetable[3].setFertilizer("No need to fertilize if you have an organic soil");
	Flowering_Vegetable[3].setFertilizerDelay(0);
	Flowering_Vegetable[3].setIsToxic(false);
	Flowering_Vegetable[3].setToxicInfo("Non-toxic");
	Flowering_Vegetable[3].setFacts("Okra is a flowering plant that is grown as an annual in most regions, though the \n\tspecies (Abelmoschus esculentus) is a perennial plant in the dry tropical regions where it \n\tis native.");

	Flowering_Vegetable[4].setName("Calamansi");
	Flowering_Vegetable[4].setSciName("Citrofortunella microcarpa");
	Flowering_Vegetable[4].setWater("Keep soil constantly moist. Water when 2 inches of soil is dry.");
	Flowering_Vegetable[4].setWaterDelay(2);
	Flowering_Vegetable[4].setLight("Full Sun");
	Flowering_Vegetable[4].setIsLight(false);
	Flowering_Vegetable[4].setHumidity("50% humidity");
	Flowering_Vegetable[4].setHighHumid(false);
	Flowering_Vegetable[4].setFertilizer("You should feed your Calamnsi once every three weeks from spring to summer. \n\tApply a balanced fertilizer that is rich in nitrogen, potassium and phosphorous to them.");
	Flowering_Vegetable[4].setFertilizerDelay(0.75);
	Flowering_Vegetable[4].setIsToxic(false);
	Flowering_Vegetable[4].setToxicInfo("Non-toxic");
	Flowering_Vegetable[4].setFacts("Calamansi tree belongs to citrus family. It grows 3 to 6 m (10 to 20 ft) tall. The \n\tflowers of it are color white and have a fragrant smell. The fruit of it has a round shape \n\tand pale green in color and orange when ripe. It has also thorns on the bark of the tree.");
}
void assignIndoorTrees() {
	IndoorTrees[0].setName("Fiddle Leaf Fig");
	IndoorTrees[0].setSciName("Ficus lyrata");
	IndoorTrees[0].setWater("Moist but not wet");
	IndoorTrees[0].setWaterDelay(2);
	IndoorTrees[0].setLight("Medium to Bright, filtered light");
	IndoorTrees[0].setIsLight(false);
	IndoorTrees[0].setHumidity("Aim for a humidity level between 30% and 65%. If you need to supplement humidity, mist \n\tyour plant with clean water in a spray bottle daily.");
	IndoorTrees[0].setHighHumid(false);
	IndoorTrees[0].setFertilizer("Fertilize throughout the growing season with a high-nitrogen plant food, following \n\tlabel instructions.");
	IndoorTrees[0].setFertilizerDelay(0);
	IndoorTrees[0].setIsToxic(true);
	IndoorTrees[0].setToxicInfo("Very toxic to humans and animals");
	IndoorTrees[0].setFacts("The fiddle-leaf fig (Ficus lyrata) is a popular indoor specimen plant featuring very \n\tlarge, heavily veined, violin-shaped leaves that grow upright.");

	IndoorTrees[1].setName("Rubber Tree");
	IndoorTrees[1].setSciName("Ficus elastica");
	IndoorTrees[1].setWater("Water every 1-2 weeks, allowing soil to dry out between waterings. Increase frequency \n\twith increased light.");
	IndoorTrees[1].setWaterDelay(4);
	IndoorTrees[1].setLight("Medium to bright indirect light. Can tolerate direct light.");
	IndoorTrees[1].setIsLight(true);
	IndoorTrees[1].setHumidity("Any humidity level is fine.");
	IndoorTrees[1].setHighHumid(true);
	IndoorTrees[1].setFertilizer("Fertilize regularly with a water-soluble houseplant fertilizer during active \n\tgrowth in the spring and summer. This should be done every two weeks.");
	IndoorTrees[1].setFertilizerDelay(0.5);
	IndoorTrees[1].setIsToxic(true);
	IndoorTrees[1].setToxicInfo("Poisonous to humans and animals.");
	IndoorTrees[1].setFacts("Ficus elastica is a species of evergreen tropical tree native to southern China, \n\tSoutheast Asia, and Indonesia. Belonging to the fig family, Moraceae, it was used for its latex sap \n\tto make rubber before synthetics were made available.");

	IndoorTrees[2].setName("Yucca Tree");
	IndoorTrees[2].setSciName("Yucca");
	IndoorTrees[2].setWater("Yuccas are extremely drought tolerant, but will look better with regular watering of \n\tabout an inch per week during spring and summer, along with an occasional deep soaking.");
	IndoorTrees[2].setWaterDelay(7);
	IndoorTrees[2].setLight("Full Sun");
	IndoorTrees[2].setIsLight(false);
	IndoorTrees[2].setHumidity("Doesn’t like high humidity. 30% humidity.");
	IndoorTrees[2].setHighHumid(false);
	IndoorTrees[2].setFertilizer("Yucca tree is a slow growing plant which only needs to be fertilize few times a year");
	IndoorTrees[3].setFertilizerDelay(3);
	IndoorTrees[2].setIsToxic(true);
	IndoorTrees[2].setToxicInfo("Toxic to animals and humans if ingested.");
	IndoorTrees[2].setFacts("Sentinels of the southwestern deserts, yuccas are extremely drought tolerant and store \n\twater in their trunks or bulbous bases. Their foliage grows in rosette form either at ground \n\tlevel or on stalks, trunks or branches.");

	IndoorTrees[3].setName("Umbrella Tree");
	IndoorTrees[3].setSciName("Schefflera Arboricolum");
	IndoorTrees[3].setWater("The best advice is to water once the top soil becomes dry.");
	IndoorTrees[3].setWaterDelay(2);
	IndoorTrees[3].setLight("Basic light condition without direct sunlight.");
	IndoorTrees[3].setIsLight(true);
	IndoorTrees[3].setHumidity("Average humidity levels.");
	IndoorTrees[3].setHighHumid(false);
	IndoorTrees[3].setFertilizer("Use a diluted fertilizer once a month.");
	IndoorTrees[3].setFertilizerDelay(1);
	IndoorTrees[3].setIsToxic(true);
	IndoorTrees[3].setToxicInfo("Toxic to animals and humans if ingested.");
	IndoorTrees[3].setFacts("The umbrella plant is a multi-trunk tree that can grows over 15 metres tall outdoors \n\tand has to be pruned and topped at some point to keep its size manageable within a home. Its close \n\trelative () Schefflera Actinophylla) has to carefully planted because of its invasive nature \n\tand is seen as a weed in certain places.");

	IndoorTrees[4].setName("Money Tree");
	IndoorTrees[4].setSciName("Pachira aquatica");
	IndoorTrees[4].setWater("Keep soil slightly moist");
	IndoorTrees[4].setWaterDelay(2);
	IndoorTrees[4].setLight("Bright to medium indirect light");
	IndoorTrees[4].setIsLight(true);
	IndoorTrees[4].setHumidity("Prefers high humidity.");
	IndoorTrees[4].setHighHumid(true);
	IndoorTrees[4].setFertilizer("Fertilize once a month with water-soluble fertilizer.");
	IndoorTrees[4].setFertilizerDelay(1);
	IndoorTrees[4].setIsToxic(false);
	IndoorTrees[4].setToxicInfo("Non-toxic");
	IndoorTrees[4].setFacts("The Money Tree is a perfect indoor foliage plant to give your home a tropical feel. \n\tNative from Mexico to northern South America, the Money Tree is also very popular in Taiwan and other \n\tEast Asian countries.");

	IndoorTrees[5].setName("Dragon Tree");
	IndoorTrees[5].setSciName("Dracaena marginata");
	IndoorTrees[5].setWater("Dry out between waterings. Water thoroughly once a week.");
	IndoorTrees[5].setWaterDelay(7);
	IndoorTrees[5].setLight("Bright indirect light");
	IndoorTrees[5].setIsLight(true);
	IndoorTrees[5].setHumidity("70% to 80% humidity");
	IndoorTrees[5].setHighHumid(false);
	IndoorTrees[5].setFertilizer("Dragon tree is a slow growing plant which only needs to be fertilize few times a year");
	IndoorTrees[5].setFertilizerDelay(3);
	IndoorTrees[5].setIsToxic(true);
	IndoorTrees[5].setToxicInfo("Toxic when ingested.");
	IndoorTrees[5].setFacts("An attractive plant with green sword-like, red-edged leaves. Native to Madagascar, the \n\teye-catching spiky tree is known as a great entry plant for household gardeners—it's easy to care for, \n\tdrought-tolerant, and nearly indestructible.");

	IndoorTrees[6].setName("Red Grass Palm");
	IndoorTrees[6].setSciName("Cordyline australis");
	IndoorTrees[6].setWater("Regular watering during growing season. Water when soil feels dry to the touch.");
	IndoorTrees[6].setWaterDelay(2);
	IndoorTrees[6].setLight("In sun or partial shade");
	IndoorTrees[6].setIsLight(true);
	IndoorTrees[6].setHumidity("High Humidity");
	IndoorTrees[6].setHighHumid(true);
	IndoorTrees[6].setFertilizer("Fertilize monthly with a balanced fertilizer (10-10-10)");
	IndoorTrees[6].setFertilizerDelay(1);
	IndoorTrees[6].setIsToxic(true);
	IndoorTrees[6].setToxicInfo("Toxic to pets");
	IndoorTrees[6].setFacts("A palm like shrub or small tree with interesting burgundy-purple variegated foliage; \n\twill eventually branch out; produces large panicles of sweet smelling white blooms; a wonderful addition \n\tto a tropical themed garden");
}
void assignSucculents() {
	Succulents[0].setName("Aloe Vera");
	Succulents[0].setSciName("Aloe Vera");
	Succulents[0].setWater("Water aloe vera plants deeply, but infrequently.Water every 2-3 weeks. 1/3 of the soil \n\tmust dry out before watering again.");
	Succulents[0].setWaterDelay(7);
	Succulents[0].setLight("Full sun to partial sun");
	Succulents[0].setIsLight(false);
	Succulents[0].setHumidity("Average humidity");
	Succulents[0].setHighHumid(false);
	Succulents[0].setFertilizer("Fertilize sparingly (no more than once a month), and only in the spring and summer \n\twith a balanced houseplant formula mixed at ½ strength");
	Succulents[0].setFertilizerDelay(0.25);
	Succulents[0].setIsToxic(true);
	Succulents[0].setToxicInfo("Has potential toxicity when ingested.");
	Succulents[0].setFacts("The aloe vera plant is an easy, attractive succulent that makes for a great indoor companion.\n\tAloe vera plants are useful, too, as the juice from their leaves can be used to relieve pain from \n\tscrapesand burns when applied topically");

	Succulents[1].setName("Crown of Thorns");
	Succulents[1].setSciName("Euphorbia milii");
	Succulents[1].setWater("Water when the soil feels dry about 1 inch below the surface. Do not let your plant sit \n\tin water or wet soil for prolonged periods of time or the roots will rot.");
	Succulents[1].setWaterDelay(3);
	Succulents[1].setLight("Full Sun for best blossoms");
	Succulents[1].setIsLight(false);
	Succulents[1].setHumidity("Average to low humidity.");
	Succulents[1].setHighHumid(false);
	Succulents[1].setFertilizer("Fertilize every other time you water. Dilute the fertilizer to half strength.");
	Succulents[1].setFertilizerDelay(0);
	Succulents[1].setIsToxic(true);
	Succulents[1].setToxicInfo("Toxic to people and pets");
	Succulents[1].setFacts("Crown of thorns (Euphorbia milii) is a very pretty succulent plant that can bloom almost \n\tyear-round, even indoors. The true flowers are small and green, surrounded by showy bracts in red, \n\torange, pink, yellow, tor white. Although crown of thorns can grow into a woody shrub, it is \n\talso an ideal houseplant for most homes.");

	Succulents[2].setName("Snake Plant");
	Succulents[2].setSciName("Sansevieria trifasciata");
	Succulents[2].setWater("Let the soil dry between waterings");
	Succulents[2].setWaterDelay(5);
	Succulents[2].setLight("Partial shade to low light");
	Succulents[2].setIsLight(true);
	Succulents[2].setHumidity("Average humidity levels. 40-50%");
	Succulents[2].setHighHumid(false);
	Succulents[2].setFertilizer("Fertilize during growing season, every 4-6 weeks");
	Succulents[2].setFertilizerDelay(1);
	Succulents[2].setIsToxic(true);
	Succulents[2].setToxicInfo("Moderately toxic to people, dogs, and cats.");
	Succulents[2].setFacts("Sansevieria trifasciata (also known as snake plant or mother-in-law's tongue) is one \n\tof the most popular and hardy species of houseplants. It features stiff leaves that range from 6 inches to 8 \n\tfeet tall, depending on the variety.");

	Succulents[3].setName("Hens-and-Chicks");
	Succulents[3].setSciName("Sempervivum tectorum");
	Succulents[3].setWater("Low water needed, Drought Tolerant. Let soil dry out between watering.");
	Succulents[3].setWaterDelay(7);
	Succulents[3].setLight("Full Sun to Partial Sun");
	Succulents[3].setIsLight(false);
	Succulents[3].setHumidity("Average humidity levels. 40-50%");
	Succulents[3].setHighHumid(false);
	Succulents[3].setFertilizer("No fertilizer needed");
	Succulents[3].setFertilizerDelay(0);
	Succulents[3].setIsToxic(false);
	Succulents[3].setToxicInfo("Non-toxic");
	Succulents[3].setFacts("Hens and Chicks (Sempervivum tectorum) are low growing evergreen succulent plants that \n\tlook a little like rubbery roses. They are considered alpine or rock garden plants, because of their \n\thardiness and drought resistance. The original rosette, the ‘Hen’ produces tiny rosette \n\toffsets that are known as the ‘Chicks.’");
}
void assignHerbsLeafy() {
	Herbs_LeafyGreens[0].setName("Lettuce");
	Herbs_LeafyGreens[0].setSciName("Lactuca sativa");
	Herbs_LeafyGreens[0].setWater("Lettuce watering should be light, frequent and consistent. Keep soil moist.");
	Herbs_LeafyGreens[0].setWaterDelay(1);
	Herbs_LeafyGreens[0].setLight("Full Sun");
	Herbs_LeafyGreens[0].setIsLight(false);
	Herbs_LeafyGreens[0].setHumidity("High Humidity");
	Herbs_LeafyGreens[0].setHighHumid(true);
	Herbs_LeafyGreens[0].setFertilizer("Apply water soluble fertilizer after a month of planting");
	Herbs_LeafyGreens[0].setFertilizerDelay(1);
	Herbs_LeafyGreens[0].setIsToxic(false);
	Herbs_LeafyGreens[0].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[0].setFacts("Lettuce is an easy-to-grow annual vegetable. Considered a spring and fall crop, \n\tlettuce thrives when temperatures are between 60 to 70 degrees F. Many varieties reach maturity in as \n\tlittle as 30 days, and some can even be harvested much earlier as microgreens.");

	Herbs_LeafyGreens[1].setName("Pechay");
	Herbs_LeafyGreens[1].setSciName("Brassica rapa");
	Herbs_LeafyGreens[1].setWater("Watering should be light, frequent and consistent. Keep soil moist.");
	Herbs_LeafyGreens[1].setWaterDelay(1);
	Herbs_LeafyGreens[1].setLight("Full Sun");
	Herbs_LeafyGreens[1].setIsLight(false);
	Herbs_LeafyGreens[1].setHumidity("High Humidity");
	Herbs_LeafyGreens[1].setHighHumid(true);
	Herbs_LeafyGreens[1].setFertilizer("Apply balanced fertilizer twice every month");
	Herbs_LeafyGreens[1].setFertilizerDelay(1);
	Herbs_LeafyGreens[1].setIsToxic(false);
	Herbs_LeafyGreens[1].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[1].setFacts("It is a very popular vegetable  in Chinese and Southeast Asian cuisine.  In \n\twestern countries, they are also known as  “bok choy” or “pak choy”.  The pechay leaves are smooth and dark \n\tgreen in color forming a cluster similar to  mustard greens.");

	Herbs_LeafyGreens[2].setName("Mint");
	Herbs_LeafyGreens[2].setSciName("Mentha");
	Herbs_LeafyGreens[2].setWater("Water regularly to keep soil moist");
	Herbs_LeafyGreens[2].setWaterDelay(1);
	Herbs_LeafyGreens[2].setLight("Full Sun");
	Herbs_LeafyGreens[2].setIsLight(false);
	Herbs_LeafyGreens[2].setHumidity("70% or high humidity");
	Herbs_LeafyGreens[2].setHighHumid(true);
	Herbs_LeafyGreens[2].setFertilizer("Use slow release fertilizer every 4 to 6 weeks");
	Herbs_LeafyGreens[2].setFertilizerDelay(1);
	Herbs_LeafyGreens[2].setIsToxic(false);
	Herbs_LeafyGreens[2].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[2].setFacts("Mint is a perennial herb with very fragrant, toothed leaves and tiny purple, \n\tpink, or white flowers. There are many varieties of mint—all fragrant, whether shiny or fuzzy, smooth or \n\tcrinkled, bright green or variegated.");

	Herbs_LeafyGreens[3].setName("Basil");
	Herbs_LeafyGreens[3].setSciName("Ocimum basilicum");
	Herbs_LeafyGreens[3].setWater("Water 1 inch every week. Keep the water moist");
	Herbs_LeafyGreens[3].setWaterDelay(3);
	Herbs_LeafyGreens[3].setLight("Full Sun");
	Herbs_LeafyGreens[3].setIsLight(false);
	Herbs_LeafyGreens[3].setHumidity("60-65% Prefers warm and humid climates");
	Herbs_LeafyGreens[3].setHighHumid(false);
	Herbs_LeafyGreens[3].setFertilizer("Fertilizer isn’t necessary but you can put fertilizer once or twice during \n\tgrowing season.");
	Herbs_LeafyGreens[3].setFertilizerDelay(0);
	Herbs_LeafyGreens[3].setIsToxic(false);
	Herbs_LeafyGreens[3].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[3].setFacts("Basil is a warm-weather, fragrant herb that tastes great in many dishes.");

	Herbs_LeafyGreens[4].setName("Parsley");
	Herbs_LeafyGreens[4].setSciName("Petroselinum crispum");
	Herbs_LeafyGreens[4].setWater("Water 2-3 times per week");
	Herbs_LeafyGreens[4].setWaterDelay(2);
	Herbs_LeafyGreens[4].setLight("Full Sun");
	Herbs_LeafyGreens[4].setIsLight(false);
	Herbs_LeafyGreens[4].setHumidity("Prefers humid places. Mist when leaves dry.");
	Herbs_LeafyGreens[4].setHighHumid(false);
	Herbs_LeafyGreens[4].setFertilizer("Fertilize once or twice during growing season.");
	Herbs_LeafyGreens[4].setFertilizerDelay(0);
	Herbs_LeafyGreens[4].setIsToxic(false);
	Herbs_LeafyGreens[4].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[4].setFacts("Parsley is a biennial plant with bright green, feather-like leaves and is in \n\tthe same family as dill");

	Herbs_LeafyGreens[5].setName("Rosemary");
	Herbs_LeafyGreens[5].setSciName("Rosmarinus officinalis");
	Herbs_LeafyGreens[5].setWater("Water when soil is completely dry.");
	Herbs_LeafyGreens[5].setWaterDelay(5);
	Herbs_LeafyGreens[5].setLight("Full Sun");
	Herbs_LeafyGreens[5].setIsLight(false);
	Herbs_LeafyGreens[5].setHumidity("Can tolerate wide range of humidity but prefers low humidity");
	Herbs_LeafyGreens[5].setHighHumid(false);
	Herbs_LeafyGreens[5].setFertilizer("Periodic foliar sprays with the emulsion will keep it looking great.");
	Herbs_LeafyGreens[5].setFertilizerDelay(0);
	Herbs_LeafyGreens[5].setIsToxic(false);
	Herbs_LeafyGreens[5].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[5].setFacts("Rosemary is a fragrant evergreen herb native to the Mediterranean. It is used \n\tas a culinary condiment, to make bodily perfumes, and for its potential health benefits.");

	Herbs_LeafyGreens[6].setName("Lemon Grass");
	Herbs_LeafyGreens[6].setSciName("Cymbopogon");
	Herbs_LeafyGreens[6].setWater("Keep soil consistently moist. Water when top inch dries");
	Herbs_LeafyGreens[6].setWaterDelay(2);
	Herbs_LeafyGreens[6].setLight("Full Sun");
	Herbs_LeafyGreens[6].setIsLight(false);
	Herbs_LeafyGreens[6].setHumidity("Prefers hot, humid weather");
	Herbs_LeafyGreens[6].setHighHumid(false);
	Herbs_LeafyGreens[6].setFertilizer("Fertilize every 2-3 weeks");
	Herbs_LeafyGreens[6].setFertilizerDelay(0.25);
	Herbs_LeafyGreens[6].setIsToxic(false);
	Herbs_LeafyGreens[6].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[6].setFacts("Lemongrass is a tropical herb packed with strong citrus flavor. The lemon taste is \n\tprized in Asian cooking, as well as in teas, sauces, and soups. In the garden, lemongrass forms a \n\ttall, grassy clump 3 to 5 feet tall.");

	Herbs_LeafyGreens[7].setName("Oregano");
	Herbs_LeafyGreens[7].setSciName("Origanum vulgare");
	Herbs_LeafyGreens[7].setWater("Keep soil consistently moist. Water when top inch dries.");
	Herbs_LeafyGreens[7].setWaterDelay(2);
	Herbs_LeafyGreens[7].setLight("Full Sun");
	Herbs_LeafyGreens[7].setIsLight(false);
	Herbs_LeafyGreens[7].setHumidity("Prefers hot, humid weather");
	Herbs_LeafyGreens[7].setHighHumid(false);
	Herbs_LeafyGreens[7].setFertilizer("Fertilize once every growing season");
	Herbs_LeafyGreens[7].setFertilizerDelay(0);
	Herbs_LeafyGreens[7].setIsToxic(false);
	Herbs_LeafyGreens[7].setToxicInfo("Non-toxic");
	Herbs_LeafyGreens[7].setFacts("Oregano, an herb with a robust scent and flavor, loves to grow in pots where it \n\tcan spill over an edge of a pot or low wall. However, its trailing growth also makes it a good seasonal \n\tground cover, or it can serve as a nice edging along a path.");
}
void assignHanging() {
	Hanging[0].setName("Pothos or Devil's Ivy");
	Hanging[0].setSciName("Epipremnum aureum");
	Hanging[0].setWater("Allow 2 inches to dry out between watering. Water often if leaves are wilting");
	Hanging[0].setWaterDelay(3);
	Hanging[0].setLight("Bright indirect light");
	Hanging[0].setIsLight(false);
	Hanging[0].setHumidity("Prefer high humidity");
	Hanging[0].setHighHumid(true);
	Hanging[0].setFertilizer("Pothos needs to be fertilized with a balanced 10-10-10 or 20-20-20 fertilizer every \n\t4-6 weeks during their growing season");
	Hanging[0].setFertilizerDelay(1);
	Hanging[0].setIsToxic(true);
	Hanging[0].setToxicInfo("All parts are poisonous if ingested");
	Hanging[0].setFacts("One of the easiest houseplants to grow, pothos (Epipremnum aureum) is often overlooked in \n\tfavor of showier plants such as orchids. Though lacking blooms, this tropical vine—similar to \n\tphilodendron—comes in an array of foliage colors and patterns that appeal to a wide range of \n\ttastes and decors.");

	Hanging[1].setName("Heartleaf Philodendron");
	Hanging[1].setSciName("Philodendron hederaceum");
	Hanging[1].setWater("Water every 1-2 weeks, allowing soil to dry out between waterings. Increase frequency with increased light");
	Hanging[1].setWaterDelay(5);
	Hanging[1].setLight("Medium indirect light");
	Hanging[1].setIsLight(true);
	Hanging[1].setHumidity("Any humidity level will do, but moist air will help lead to larger leaves and faster growth.");
	Hanging[1].setHighHumid(true);
	Hanging[1].setFertilizer("Water the plant with the fertilizer monthly in spring and summer and every six to eight weeks in fall and winter");
	Hanging[1].setFertilizerDelay(1);
	Hanging[1].setIsToxic(true);
	Hanging[1].setToxicInfo("Poisonous but non-lethal sap causes skin irritation and burning of the mouth if ingested.");
	Hanging[1].setFacts("An evergreen perennial vine, native to Tropical America. It has the reputation of being one of the easiest houseplants. \n\tKnown for its heart-shaped leaves and trailing vines, this Philodendron is \n\tparticularly fitting for indoor settings because it is able to filter gaseous \n\ttoxins from the air.");

	Hanging[2].setName("English Ivy");
	Hanging[2].setSciName("Hedera helix");
	Hanging[2].setWater("Prefers to be dried out before watering. Should not be kept in overly wet soil.");
	Hanging[2].setWaterDelay(5);
	Hanging[2].setLight("Moderately low light to medium light");
	Hanging[2].setIsLight(false);
	Hanging[2].setHumidity("Medium to high humidity");
	Hanging[2].setHighHumid(true);
	Hanging[2].setFertilizer("Feed English ivy every two weeks during the spring and summer season, using a 20-20-20 fertilizer (or a 2-2-2 \n\torganic formula).");
	Hanging[2].setFertilizerDelay(0.5);
	Hanging[2].setIsToxic(true);
	Hanging[2].setToxicInfo("Mildly toxic when ingested");
	Hanging[2].setFacts("English ivy plants (Hedera helix) are evergreen perennials. They are also classified as woody vines. English ivy \n\tcan act as a ground cover, spreading horizontally and reaching 8 inches in height. \n\tBut its is also a climber, due to its aerial rootlets, which allow it to climb \n\tto heights of 80 feet.");

	Hanging[3].setName("Arrowhead Plant");
	Hanging[3].setSciName("Syngonium  podophyllum");
	Hanging[3].setWater("Water regularly, dry out partially between waterings.");
	Hanging[3].setWaterDelay(3);
	Hanging[3].setLight("Bright indirect light");
	Hanging[3].setIsLight(true);
	Hanging[3].setHumidity("Naturally higher humidity");
	Hanging[3].setHighHumid(true);
	Hanging[3].setFertilizer("Feed your arrowhead vine once a month with liquid fertilizer throughout the spring, summer, and fall months.");
	Hanging[3].setFertilizerDelay(1);
	Hanging[3].setIsToxic(true);
	Hanging[3].setToxicInfo("Mildly toxic to animals");
	Hanging[3].setFacts("The arrowhead vine is a pretty trailing or climbing vine that tends to grow quickly under the right conditions. \n\tNative to a wide region of South America, it has become a popular houseplant, \n\tthanks to its easy-going nature and appealing hanging shape");

	Hanging[4].setName("Radiator Plants");
	Hanging[4].setSciName("Peperomia");
	Hanging[4].setWater("Allow soil to dry as deep as 5 inches between waterings");
	Hanging[4].setWaterDelay(7);
	Hanging[4].setLight("Medium to low indirect light");
	Hanging[4].setIsLight(true);
	Hanging[4].setHumidity("Average humidity");
	Hanging[4].setHighHumid(false);
	Hanging[4].setFertilizer("Fertilize with 20-20-20 fertilizer twice a week at half strength. Reduce rate every fall and winter");
	Hanging[4].setFertilizerDelay(0.5);
	Hanging[4].setIsToxic(false);
	Hanging[4].setToxicInfo("Non-toxic");
	Hanging[4].setFacts("The Peperomia houseplant is an attractive addition to a desk, table, or as a member of your houseplant collection. \n\tPeperomia care is not difficult and Peperomia plants have a compact form that \n\tlets them occupy a small space wherever you choose to place them");

	Hanging[5].setName("Swiss Cheese Plant");
	Hanging[5].setSciName("Monstera deliciosa/adansonii");
	Hanging[5].setWater("Swiss cheese plants like to be consistently moist, but not soaked.");
	Hanging[5].setWaterDelay(2);
	Hanging[5].setLight("Full sun, partial shade");
	Hanging[5].setIsLight(true);
	Hanging[5].setHumidity("Very high humidity, lots of moisture, and high temperatures");
	Hanging[5].setHighHumid(true);
	Hanging[5].setFertilizer("Fertilize monthly");
	Hanging[5].setFertilizerDelay(1);
	Hanging[5].setIsToxic(true);
	Hanging[5].setToxicInfo("Toxic to dogs and cats");
	Hanging[5].setFacts("The Swiss cheese plant gets its name from its large, heart-shaped leaves which, develop holes as the plant ages \n\t(called \"fenestration\"), making its leaves resemble Swiss cheese.");
}
void assignment() {
	assignOrnamental();
	assignFlowerVegetable();
	assignIndoorTrees();
	assignSucculents();
	assignHerbsLeafy();
	assignHanging();
	for (int i = 0; i < 10; i++) {
		All[i].setName(Ornamental[i].getName());
		All[i].setSciName(Ornamental[i].getSciName());
		All[i].setWater(Ornamental[i].getWater());
		All[i].setWaterDelay(Ornamental[i].getWaterDelay());
		All[i].setLight(Ornamental[i].getLight());
		All[i].setIsLight(Ornamental[i].getIsLight());
		All[i].setHumidity(Ornamental[i].getHumidity());
		All[i].setHighHumid(Ornamental[i].getHighHumid());
		All[i].setFertilizer(Ornamental[i].getFertilizer());
		All[i].setFertilizerDelay(Ornamental[i].getFertilizerDelay());
		All[i].setIsToxic(Ornamental[i].getIsToxic());
		All[i].setToxicInfo(Ornamental[i].getToxicInfo());
		All[i].setFacts(Ornamental[i].getFacts());
	}

	for (int i = 10, j = 0; i < 15; i++, j++) {
		All[i].setName(Flowering_Vegetable[j].getName());
		All[i].setSciName(Flowering_Vegetable[j].getSciName());
		All[i].setWater(Flowering_Vegetable[j].getWater());
		All[i].setWaterDelay(Flowering_Vegetable[j].getWaterDelay());
		All[i].setLight(Flowering_Vegetable[j].getLight());
		All[i].setIsLight(Flowering_Vegetable[i].getIsLight());
		All[i].setHumidity(Flowering_Vegetable[j].getHumidity());
		All[i].setHighHumid(Flowering_Vegetable[i].getHighHumid());
		All[i].setFertilizer(Flowering_Vegetable[j].getFertilizer());
		All[i].setFertilizerDelay(Flowering_Vegetable[i].getFertilizerDelay());
		All[i].setIsToxic(Flowering_Vegetable[j].getIsToxic());
		All[i].setToxicInfo(Flowering_Vegetable[j].getToxicInfo());
		All[i].setFacts(Flowering_Vegetable[j].getFacts());
	}
	for (int i = 15, j = 0; i < 22; i++, j++) {
		All[i].setName(IndoorTrees[j].getName());
		All[i].setSciName(IndoorTrees[j].getSciName());
		All[i].setWater(IndoorTrees[j].getWater());
		All[i].setWaterDelay(IndoorTrees[j].getWaterDelay());
		All[i].setLight(IndoorTrees[j].getLight());
		All[i].setIsLight(IndoorTrees[i].getIsLight());
		All[i].setHumidity(IndoorTrees[j].getHumidity());
		All[i].setHighHumid(IndoorTrees[i].getHighHumid());
		All[i].setFertilizer(IndoorTrees[j].getFertilizer());
		All[i].setFertilizerDelay(IndoorTrees[i].getFertilizerDelay());
		All[i].setIsToxic(IndoorTrees[j].getIsToxic());
		All[i].setToxicInfo(IndoorTrees[j].getToxicInfo());
		All[i].setFacts(IndoorTrees[j].getFacts());
	}
	for (int i = 22, j = 0; i < 26; i++, j++) {
		All[i].setName(Succulents[j].getName());
		All[i].setSciName(Succulents[j].getSciName());
		All[i].setWater(Succulents[j].getWater());
		All[i].setWaterDelay(Succulents[j].getWaterDelay());
		All[i].setLight(Succulents[j].getLight());
		All[i].setIsLight(Succulents[i].getIsLight());
		All[i].setHumidity(Succulents[j].getHumidity());
		All[i].setHighHumid(Succulents[i].getHighHumid());
		All[i].setFertilizer(Succulents[j].getFertilizer());
		All[i].setFertilizerDelay(Succulents[i].getFertilizerDelay());
		All[i].setIsToxic(Succulents[j].getIsToxic());
		All[i].setToxicInfo(Succulents[j].getToxicInfo());
		All[i].setFacts(Succulents[j].getFacts());
	}
	for (int i = 26, j = 0; i < 34; i++, j++) {
		All[i].setName(Herbs_LeafyGreens[j].getName());
		All[i].setSciName(Herbs_LeafyGreens[j].getSciName());
		All[i].setWater(Herbs_LeafyGreens[j].getWater());
		All[i].setWaterDelay(Herbs_LeafyGreens[j].getWaterDelay());
		All[i].setLight(Herbs_LeafyGreens[j].getLight());
		All[i].setIsLight(Herbs_LeafyGreens[i].getIsLight());
		All[i].setHumidity(Herbs_LeafyGreens[j].getHumidity());
		All[i].setHighHumid(Herbs_LeafyGreens[i].getHighHumid());
		All[i].setFertilizer(Herbs_LeafyGreens[j].getFertilizer());
		All[i].setFertilizerDelay(Herbs_LeafyGreens[i].getFertilizerDelay());
		All[i].setIsToxic(Herbs_LeafyGreens[j].getIsToxic());
		All[i].setToxicInfo(Herbs_LeafyGreens[j].getToxicInfo());
		All[i].setFacts(Herbs_LeafyGreens[j].getFacts());
	}
	for (int i = 34, j = 0; i < 40; i++, j++) {
		All[i].setName(Hanging[j].getName());
		All[i].setSciName(Hanging[j].getSciName());
		All[i].setWater(Hanging[j].getWater());
		All[i].setWaterDelay(Hanging[j].getWaterDelay());
		All[i].setLight(Hanging[j].getLight());
		All[i].setIsLight(Hanging[i].getIsLight());
		All[i].setHumidity(Hanging[j].getHumidity());
		All[i].setHighHumid(Hanging[i].getHighHumid());
		All[i].setFertilizer(Hanging[j].getFertilizer());
		All[i].setFertilizerDelay(Hanging[i].getFertilizerDelay());
		All[i].setIsToxic(Hanging[j].getIsToxic());
		All[i].setToxicInfo(Hanging[j].getToxicInfo());
		All[i].setFacts(Hanging[j].getFacts());
	}
}

void search(Plant type[], int size);
void display(Plant category[], int choice, int size, int code);
void searchfor();
void recommend();

void display(Plant category[], int choice, int size, int code) {
	int displayCh;
	clrscr();
	border();

	gotoxy(0, 4);
	SetColorAndBackground(15, 0);
	cout << "\t[PLANT NAME]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getName();
	SetColorAndBackground(15, 0);
	cout << "\n\t[SCIENTIFIC NAME]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getSciName();
	SetColorAndBackground(15, 0);
	cout << "\n\t[FACTS]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getFacts();
	SetColorAndBackground(15, 0);
	cout << "\n\n\t[WATERING]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getWater();
	SetColorAndBackground(15, 0);
	cout << "\n\t[KEEP WATERED EVERY]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getWaterDelay() << " Days";
	SetColorAndBackground(15, 0);
	cout << "\n\t[PREFERRED LIGHT]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getLight();
	SetColorAndBackground(15, 0);
	cout << "\n\t[PREFERRED HUMIDITY]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getHumidity();
	SetColorAndBackground(15, 0);
	cout << "\n\t[FERTILIZER]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getFertilizer();
	if (category[index[choice - 2]].getIsToxic())
	{
		SetColorAndBackground(15, 0); cout << "\n\t[TOXIC]"; SetColorAndBackground(0, 15); cout << "  Yes " << "(" << category[index[choice - 2]].getToxicInfo() << ")";
	}
	else
		SetColorAndBackground(15, 0); cout << "\n\t[TOXIC]"; SetColorAndBackground(0, 15); cout << "  " << category[index[choice - 2]].getToxicInfo();

	gotoxy(5, 24);
	cout << "[0] - Return     [1] - Watering Schedule" << endl;

	gotoxy(5, 27);
	cout << "INPUT:";
	gotoxy(12, 27);
	cin >> displayCh;

	if (displayCh == 1)
	{
		clrscr();
		border();

		int da, ye;
		string mo;

		gotoxy(45, 7); SetColorAndBackground(15, 0);
		cout << "                             ";
		gotoxy(45, 8); SetColorAndBackground(15, 0);
		cout << "  [PLANT WATERING SCHEDULE]  ";
		gotoxy(45, 9); SetColorAndBackground(15, 0);
		cout << "                             ";

		gotoxy(26, 12); SetColorAndBackground(0, 15);
		cout << "[Input the required date to compute for the next watering schedule]";
		gotoxy(26, 14);
		cout << "[LAST DATE WATERED]";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(13, 27);
		gotoxy(26, 15); SetColorAndBackground(0, 15);
		cout << "Month (ex. January): ";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> mo;
		gotoxy(47, 15); SetColorAndBackground(0, 15);
		cout << mo;

		gotoxy(26, 16); SetColorAndBackground(0, 15);
		cout << "Day: ";
		clearinput();
		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> da;
		gotoxy(31, 16); SetColorAndBackground(0, 15);
		cout << da;

		gotoxy(26, 17); SetColorAndBackground(0, 15);
		cout << "Year: ";
		clearinput();
		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> ye;
		gotoxy(32, 17); SetColorAndBackground(0, 15);
		cout << ye;

		Calendar cal(convertToNum(mo), da, ye);
		cal.addDays(category[index[choice - 2]].getWaterDelay());
		gotoxy(26, 18); SetColorAndBackground(15, 0);
		cal.display(); SetColorAndBackground(0, 15);
		clearinput();
	}
	gotoxy(5, 27); getch();

	if (displayCh == 0) {
		if (code == 1) {
			clrscr();
			search(category, size);
		}
		if (code == 2) {
			clrscr();
			recommend();
		}
	}
}
void search(Plant type[], int size) {
	string input;
	Plant res;

	int searchCode[80];

	clrscr();
	border();
	//Gets the input of the user wants to search
	gotoxy(48, 4); SetColorAndBackground(15, 0);
	cout << "                      ";
	gotoxy(48, 5); SetColorAndBackground(15, 0);
	cout << "  [PLANT DICTIONARY]  ";
	gotoxy(48, 6); SetColorAndBackground(15, 0);
	cout << "                      ";

	gotoxy(24, 8); SetColorAndBackground(0, 15);
	cout << "[This option will let you search a specific plant from your name input]";
	gotoxy(24, 10);
	cout << "[SEARCH FOR]:";
	gotoxy(24, 11);
	cout << "(Type \"quit\" to return)";

	gotoxy(5, 27); SetColorAndBackground(0, 9);
	cout << "INPUT:";
	gotoxy(12, 27); SetColorAndBackground(4, 7);
	cout << "           ";
	gotoxy(13, 27);
	cin >> input;
	if (input == "quit") {
		clrscr();
		return;
	}

	gotoxy(38, 10); SetColorAndBackground(0, 15);
	cout << input;

	clearinput();

	string name, name2;
	gotoxy(26, 13); SetColorAndBackground(15, 0);
	cout << "[SEARCH RESULTS]" << endl;
	//This loop gets the data from each indices
	gotoxy(28, 13); SetColorAndBackground(0, 15);
	for (int i = 0, count = 0, choiceList = 0; i < size; i++)
	{
		name = type[i].getName();
		name2 = type[i].getSciName();

		//Detects for whole word input
		if ((input.length() == name.length()) || (input.length() == name2.length())) {
			bool sflag = true;
			int scounter = 0;
			for (int s = 0; s < input.length(); s++) {
				if ((char)tolower(name[s]) == (char)tolower(input[s])) {
					sflag = true;
					scounter++;
				}
				else {
					sflag = false;
				}
			}
			if ((sflag) && (input.length() == scounter)) {
				res = type[i];
				cout << "\n\t\t\t(" << choiceList + 2 << ") - " << "[" << res.getName() << "] - From Plant's Common Name" << endl;
				index[count] = i;
				choiceList++;
				count++;
				break;
			}

			bool sflag2 = true;
			for (int s = 0; s < input.length(); s++) {
				if ((char)tolower(name2[s]) == (char)tolower(input[s])) {
					sflag2 = true;
				}
				else {
					sflag2 = false;
				}
			}
			if (sflag2) {
				res = type[i];
				cout << "\n\t\t\t(" << choiceList + 2 << ") - " << "[" << res.getName() << "] - From Plant's Scientific Name" << endl;
				index[count] = i;
				choiceList++;
				count++;
				break;
			}
		}

		//Checks for the plant name

		//This counts all the matched characters from the comparison of input and the database
		int kcounter = 0;
		//This loop compares the input to the data that is in the database, letter by letter
		//If some characters were matched to the database, it will appear
		for (int k = 0; k < name.length(); k++) {
			if ((char)tolower(input[kcounter]) == (char)tolower(name[k])) {
				kcounter++;
			}
			else {
				if (kcounter == input.length()) {
					res = type[i];
					cout << "\n\t\t\t[" << choiceList + 2 << "] - " << "(" << res.getName() << ") - From Plant's Common Name" << endl;
					index[count] = i;
					choiceList++;
					count++;
					break;
				}
				kcounter = 0;
			}
		}

		//Checks for the plant's scientific name

		//This counts all the matched characters from the comparison of input and the database
		int kcounter2 = 0;
		//This loop compares the input to the data that is in the database, letter by letter
		//If some characters were matched to the database, it will appear
		for (int k = 0; k < name2.length(); k++) {
			if ((char)tolower(input[kcounter2]) == (char)tolower(name2[k])) {
				kcounter2++;
			}
			else {
				if (kcounter2 == input.length()) {
					res = type[i];
					cout << "\n\t\t\t[" << choiceList + 2 << "] - " << "(" << res.getName() << ") - From Plant's Scientific Name" << endl;
					index[count] = i;;
					choiceList++;
					count++;
					break;
				}
				kcounter2 = 0;
			}
		}
	}

	int choice;
	gotoxy(5, 24);
	cout << "[0] - Exit     [1] - Search again" << endl;

	//cout << "Enter your choice: ";
	gotoxy(5, 27); SetColorAndBackground(0, 9);
	cout << "INPUT:";
	gotoxy(12, 27); SetColorAndBackground(4, 7);
	cout << "           ";
	gotoxy(13, 27);
	cin >> choice;

	if ((choice == 1)) {
		clrscr();
		search(type, size);
	}
	else if (choice == 0) {
		return;
	}
	else {
		display(type, choice, size, 1);
	}
}
void searchfor() {
	//system("color F0");

	int choice;

	do {
		clrscr();
		border();

		gotoxy(50, 6); SetColorAndBackground(15, 0);
		cout << "                       ";
		gotoxy(50, 7); SetColorAndBackground(15, 0);
		cout << "  [SEARCH PLANT TYPE]  ";
		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "                       ";

		gotoxy(42, 10); SetColorAndBackground(15, 0);
		cout << "[1]";  SetColorAndBackground(0, 15); cout << " - Ornamental";
		gotoxy(42, 11); SetColorAndBackground(15, 0);
		cout << "[2]";  SetColorAndBackground(0, 15); cout << " - Flowering and Vegetable Plants";
		gotoxy(42, 12); SetColorAndBackground(15, 0);
		cout << "[3]";  SetColorAndBackground(0, 15); cout << " - Indoor Trees";
		gotoxy(42, 13); SetColorAndBackground(15, 0);
		cout << "[4]";  SetColorAndBackground(0, 15); cout << " - Succulents";
		gotoxy(42, 14); SetColorAndBackground(15, 0);
		cout << "[5]";  SetColorAndBackground(0, 15); cout << " - Herbs & Leafy Greens";
		gotoxy(42, 15); SetColorAndBackground(15, 0);
		cout << "[6]";  SetColorAndBackground(0, 15); cout << " - Hanging";
		gotoxy(42, 16); SetColorAndBackground(15, 0);
		cout << "[7]";  SetColorAndBackground(0, 15); cout << " - All Search";
		gotoxy(42, 17); SetColorAndBackground(15, 0);
		cout << "[8]";  SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> choice;

		switch (choice) {
		case 1: {
			const int size = sizeof(Ornamental) / sizeof(Ornamental[0]);
			search(Ornamental, size);
		}
			  break;

		case 2: {
			const int size2 = sizeof(Flowering_Vegetable) / sizeof(Flowering_Vegetable[0]);
			search(Flowering_Vegetable, size2);
		}
			  break;

		case 3: {
			const int size3 = sizeof(IndoorTrees) / sizeof(IndoorTrees[0]);
			search(IndoorTrees, size3);
		}
			  break;

		case 4: {
			const int size4 = sizeof(Succulents) / sizeof(Succulents[0]);
			search(Succulents, size4);
		}
			  break;

		case 5: {
			const int size5 = sizeof(Herbs_LeafyGreens) / sizeof(Herbs_LeafyGreens[0]);
			search(Herbs_LeafyGreens, size5);
		}
			  break;

		case 6: {
			const int size6 = sizeof(Hanging) / sizeof(Hanging[0]);
			search(Hanging, size6);
		}
			  break;

		case 7: {
			const int size7 = sizeof(All) / sizeof(All[0]);
			search(All, size7);
		}
			  break;
		}
	} while (choice < 8);
}
void recommend() {
	clrscr();
	for (int i = 0; i < 80; i++) {
		recommendIndex[i] = 41;
	}

	int choiceArr[5];
	int choice;
	char deact = char(176);
	char act = char(219);
	char button[5];
	for (int i = 0; i < 5; i++) {
		button[i] = deact;
	}
	bool flag = true;

	//char(176) char(219)

	while (flag) {
		clrscr();
		border();

		gotoxy(48, 5); SetColorAndBackground(15, 0);
		cout << "                      ";
		gotoxy(48, 6); SetColorAndBackground(15, 0);
		cout << "  [RECOMMEND SEARCH]  ";
		gotoxy(48, 7); SetColorAndBackground(15, 0);
		cout << "                      ";

		gotoxy(39, 9); SetColorAndBackground(15, 0);
		cout << "[LOOKING FOR]"; SetColorAndBackground(0, 15);
		gotoxy(39, 11); cout << button[0] << " "; gotoxy(41, 11); SetColorAndBackground(15, 0); cout << "[1]";  SetColorAndBackground(0, 15); cout << " - Long Water Delay";
		gotoxy(39, 12); cout << button[1] << " "; gotoxy(41, 12); SetColorAndBackground(15, 0); cout << "[2]";  SetColorAndBackground(0, 15); cout << " - Shady/Indirect Light Dependent Plants"; SetColorAndBackground(0, 15);
		gotoxy(39, 13); cout << button[2] << " "; gotoxy(41, 13); SetColorAndBackground(15, 0); cout << "[3]";  SetColorAndBackground(0, 15); cout << " - High Humidity Plants"; SetColorAndBackground(0, 15);
		gotoxy(39, 14); cout << button[3] << " "; gotoxy(41, 14); SetColorAndBackground(15, 0); cout << "[4]";  SetColorAndBackground(0, 15); cout << " - Long Fertilizer Delay"; SetColorAndBackground(0, 15);
		gotoxy(39, 15); cout << button[4] << " "; gotoxy(41, 15); SetColorAndBackground(15, 0); cout << "[5]";  SetColorAndBackground(0, 15); cout << " - Non-toxic Plants"; SetColorAndBackground(0, 15);

		gotoxy(39, 17);
		cout << "[ENTER YOUR CHOICE]" << endl;
		gotoxy(39, 18);
		cout << "      [0] - Exit        [6] - Proceed";
		gotoxy(39, 19);
		cout << "Press the same choice to cancel the choice";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> choice;

		while (cin.fail()) {
			cin.clear();
			cin.ignore();
			gotoxy(12, 27); SetColorAndBackground(0, 15);
			cout << "Wrong Input, Please type numbers only.";
			cin >> choice;
		}

		for (int i = 0; i < 5; i++) {
			if ((choice == choiceArr[i]) && (button[i] == char(219))) {
				button[i] = deact;
				choiceArr[i] = 0;
			}
			else if (choice == i + 1) {
				choiceArr[i] = choice;
				button[i] = act;
			}
		}

		if (choice == 6)
			break;
		if (choice == 0)
			return;
	}

	int verifier[200];
	for (int i = 0; i < 200; i++) {
		verifier[i] = 41;
	}
	int verifierIndex = 0;

	if (choice == 6) {
		int howMany = 0;
		for (int i = 0; i < 5; i++) {
			if (choiceArr[i] == 1) {
				howMany++;
				for (int j = 0; j < 40; j++) {
					if (All[j].getWaterDelay() >= 4) {
						verifier[verifierIndex] = j;
						verifierIndex++;
					}
				}
			}
			if (choiceArr[i] == 2) {
				howMany++;
				for (int j = 0; j < 40; j++) {
					if (All[j].getIsLight() == true) {
						verifier[verifierIndex] = j;
						verifierIndex++;
					}
				}
			}
			if (choiceArr[i] == 3) {
				howMany++;
				for (int j = 0; j < 40; j++) {
					if (All[j].getHighHumid() == true) {
						verifier[verifierIndex] = j;
						verifierIndex++;
					}
				}
			}
			if (choiceArr[i] == 4) {
				howMany++;
				for (int j = 0; j < 40; j++) {
					if ((All[j].getFertilizerDelay() == 0) || (All[j].getFertilizerDelay() >= 3)) {
						verifier[verifierIndex] = j;
						verifierIndex++;
					}
				}
			}
			if (choiceArr[i] == 5) {
				howMany++;
				for (int j = 0; j < 40; j++) {
					if (All[j].getIsToxic() == false) {
						verifier[verifierIndex] = j;
						verifierIndex++;
					}
				}
			}
		}

		if (howMany > 2) {
			gotoxy(12, 27); SetColorAndBackground(0, 15);
			cout << "Two choices only, try again \n";
			getch();
			recommend();
		}

		if (howMany == 2) {
			int mainArr[200];
			for (int i = 0; i < 200; i++) {
				mainArr[i] = 41;
			}

			int ctr = 0;
			int inst = 0;
			//Loop to transfer the qualified indices to main and secondary array
			for (int j = 0; j < verifierIndex; j++) {
				if ((inst == 2) || (verifier[j] == 41)) {
					ctr2 = ctr;
					break;
				}
				else if (verifier[j] > verifier[j + 1]) {
					mainArr[ctr] = verifier[j];
					ctr++;
					inst++;
				}
				else {
					mainArr[ctr] = verifier[j];
					ctr++;
				}
			}

			//Sort elements in the array
			int temp;
			for (int i = 1; i < sizeof(mainArr) / sizeof(mainArr[0]); i++) {
				for (int j = 0; j < sizeof(mainArr) / sizeof(mainArr[0]) - i; j++) {
					if (mainArr[j] > mainArr[j + 1]) {
						temp = mainArr[j];
						mainArr[j] = mainArr[j + 1];
						mainArr[j + 1] = temp;
					}
				}
			}

			int save;
			//Gets the array size
			for (int i = 0; i < 200; i++) {
				if (mainArr[i] == 41) {
					save = i;
					break;
				}
			}

			int arrsize = save;

			int duplicate = 0;
			//Gets all the duplicated numbers
			for (int i = 0; i < arrsize; i++) {
				for (int j = i + 1; j < arrsize; j++) {
					if (mainArr[i] == mainArr[j])
					{
						// Delete the current duplicate element
						for (int k = j; k < sizeof(mainArr) / sizeof(mainArr[0]); k++)
						{
							mainArr[k] = mainArr[k + 1];
						}

						recommendIndex[duplicate] = i;
						duplicate++;

						//Decrement size after removing duplicate element
						arrsize--;

						// If shifting of elements occur then don't increment j
						j--;
					}
				}
			}
			clrscr(); gotoxy(31, 5); SetColorAndBackground(15, 0);
			cout << "                     [SEARCH RESULT]                      " << endl << endl; SetColorAndBackground(0, 15);
			for (int i = 0, chooseList = 2; i < sizeof(recommendIndex) / sizeof(recommendIndex[0]); i++) {
				if (recommendIndex[i] != 41) {
					cout << "\n\t\t\t\t" << chooseList << " - " << All[recommendIndex[i]].getName();
					chooseList++;
				}
			}

			int choice2;
			gotoxy(5, 24);
			cout << "(0) - Exit     (1) - Try another " << endl;
			gotoxy(5, 27); SetColorAndBackground(0, 9);
			cout << "INPUT:";
			gotoxy(12, 27); SetColorAndBackground(4, 7);
			cout << "           ";
			gotoxy(13, 27);
			cin >> choice2;

			while (cin.fail()) {
				cin.clear();
				cin.ignore();
				gotoxy(13, 27);
				cout << "Wrong Input, Please type numbers only.";
				cin >> choice2;
			}

			if ((choice2 == 1)) {
				clrscr(); border();
				recommend();
			}
			else if (choice2 == 0) {
				return;
			}
			else {
				for (int i = 0; i < sizeof(recommendIndex) / sizeof(recommendIndex[0]); i++) {
					if (recommendIndex[i] != 41)
						index[i] = recommendIndex[i];
				}
				display(All, choice2, 40, 2);
			}
		}

		else {
			clrscr();  gotoxy(31, 5); SetColorAndBackground(15, 0);
			cout << "                     [SEARCH RESULT]                      " << endl << endl; SetColorAndBackground(0, 15);
			for (int i = 0, chooseList = 2; i < verifierIndex; i++) {
				if (recommendIndex[i] != 41) {
					cout << "\n\t\t\t\t" << chooseList << " - " << All[verifier[i]].getName() << endl;
					chooseList++;
				}
			}

			int choice2;
			gotoxy(5, 24);
			cout << "(0) - Exit     (1) - Try another " << endl;
			gotoxy(5, 27); SetColorAndBackground(0, 9);
			cout << "INPUT:";
			gotoxy(12, 27); SetColorAndBackground(4, 7);
			cout << "           ";
			gotoxy(13, 27);
			cin >> choice2;

			while (cin.fail()) {
				cin.clear();
				cin.ignore();
				gotoxy(13, 27);
				cout << "Wrong Input, Please type numbers only.";
				cin >> choice2;
			}

			if ((choice == 1)) {
				clrscr();
				recommend();
			}
			else if (choice2 == 0) {
				return;
			}
			else {
				for (int i = 0; i < sizeof(recommendIndex) / sizeof(recommendIndex[0]); i++) {
					if (recommendIndex[i] != 41)
						index[i] = recommendIndex[i];
				}
				display(All, choice2, 40, 2);
			}
		}
	}
}

struct PlantDisorder
{
	string Name;
	string Cause;
	string Symptoms;
	string Treat;
} PlantDisease[10];
struct Pests
{
	string Name;
	string Physical;
	string Target;
	string Control;
} PlantPest[12];

void DisorderPestInfo()
{
	PlantDisease[0].Name = " Anthracnose";
	PlantDisease[0].Cause = " This disease is caused by the fungi Colletrotrichum and Gloeosporium.";
	PlantDisease[0].Symptoms = " The leaf tips turn yellow, then tan, then dark brown. The browning may extend completely \n\taround the leaf. The leaves eventually die. Wounding enhances penetration by these fungi.";
	PlantDisease[0].Treat = " Pick off and destroy infected leaves. Do not mist leaves. Sprays of copper soap, chlorothalonil, \n\tmyclobutanil, or tebuconazole can be used after removing infected plant parts in order to reduce \n\tthe incidence of future disease.";

	PlantDisease[1].Name = " Fungal Leaf Spots";
	PlantDisease[1].Cause = " Several fungi can cause leaf spots. The fungi survive on dead and decaying plant matter \n\tin the soil.";
	PlantDisease[1].Symptoms = " Symptoms include small, brown spots with yellowish margins on the leaves. Spots may have a \n\tconcentric ring or target pattern. Small black dots (fruiting bodies of the fungi) may be \n\tvisible in dead tissue. Sometimes the lesions run together and the entire leaf dies. ";
	PlantDisease[1].Treat = " Remove and destroy infected plant material. Provide good air circulation around the plants. \n\tAvoid splashing water on the foliage since this spreads the fungi. Sprays of copper soap, \n\tchlorothalonil, myclobutanil, or tebuconazole can be used after removing infected plant parts in \n\torder to reduce the incidence of future disease.";

	PlantDisease[2].Name = " Bacterial Leaf Spots";
	PlantDisease[2].Cause = " Plants are infected with Bacteria";
	PlantDisease[2].Symptoms = " Symptoms include water soaked spots, sometimes with a yellow halo, usually uniform in size \n\tand sometimes with a sticky ooze. The spots enlarge and will run together under wet conditions.\n\tUnder drier conditions the spots do not enlarge but dry out and turn reddish brown, giving \n\ta speckled appearance.";
	PlantDisease[2].Treat = " Remove all diseased plant material. Avoid low temperatures, crowding plants, and spraying or \n\tsplashing water onto the foliage. Sprays of copper soap can be used after removing infected plant\n\tparts in order to reduce the incidence of future disease.";

	PlantDisease[3].Name = " Root and Stem Rot";
	PlantDisease[3].Cause = " The fungi Rhizoctonia, Pythium, Botrytis, Phytophthora, Alternaria, and Sclerotinia cause \n\tthese diseases.";
	PlantDisease[3].Symptoms = " With root or stem rot, leaves and stems show a noticeable wilt. Stems may be girdled at \n\tor near soil level by a ring of brown or black tissue. Infected roots are brown to black and may be soft.\n\tThe fungi survive in the soil or on infected plant debris in the soil. Their spores \n\tcan be spread by wind, splashing water or the moving of infested soil.";
	PlantDisease[3].Treat = " Use sterilized soil and pots. Do not overwater the plants, since too much water increases the\n\toccurrence of root rot. If only a few roots are infected, cut out these roots and repot the plant\n\tin sterile soil.";

	PlantDisease[4].Name = " Powdery Mildew";
	PlantDisease[4].Cause = " The fungus Oidium species.";
	PlantDisease[4].Symptoms = " formation of a white, powdery growth or dry, brown, papery leaf spots. Initial infections \n\tusually come from fungi surviving in dead and decaying plant materials or from airborne spores from\n\twild or cultivated hosts out-of-doors.";
	PlantDisease[4].Treat = " Since the disease develops most rapidly under humid conditions, proper ventilation and not \n\toverwatering will help control this disease. Remove severely infected leaves. Sprays of sulfur, \n\tchlorothalonil, or myclobutanil can be used after removing infected plant parts in order to \n\treduce the incidence of future disease.";

	PlantDisease[5].Name = " Oedema";
	PlantDisease[5].Cause = " Roots taking up more water than the leaves can transpire. Excessively moist conditions.";
	PlantDisease[5].Symptoms = " Water-soaked spots appear first on the leaves. These then become raised, warty or pimple-like\n\tswellings or growths. The growths can rupture and have a white, powdery appearance or may \n\tbecome rust-coloured and appear as scaly patches. ";
	PlantDisease[5].Treat = " Once oedema has occurred, affected leaves should not be picked off as this will make the condition\n\tworse. Maintain proper air ventilation. Get a well-draining compost mix.";

	PlantDisease[6].Name = " Leaf Drop";
	PlantDisease[6].Cause = " Over- or under-watering, environmental changes or insects.";
	PlantDisease[6].Symptoms = " Leaves dropping";
	PlantDisease[6].Treat = " Water plants properly";

	PlantDisease[7].Name = " Sooty Mold";
	PlantDisease[7].Cause = " A mold which grows in the honeydew or secretion of common houseplant pests";
	PlantDisease[7].Symptoms = " Twigs, branches or leaves coveres in grimy, black soot. This mold looks like ashes.";
	PlantDisease[7].Treat = " Determine the houseplant pests that causes this honeydew and eliminate them using treatments \n\tlike neem oil.";

	PlantDisease[8].Name = " Botrytis Blight";
	PlantDisease[8].Cause = " Caused by Botrytis cinerea, a fungus that attacks tender parts of the plant in the \n\tpresence of high humidity";
	PlantDisease[8].Symptoms = " Spotting, discoloration, and wilting of buds or flowers";
	PlantDisease[8].Treat = " Clean the surroundings f the plant. Do not leave any debris and dead plant parts that fall off.\n\tPrune off and destroy the infected part of the plant";

	PlantDisease[9].Name = " Rust";
	PlantDisease[9].Cause = " Caused by rust fungi";
	PlantDisease[9].Symptoms = " Rust color of plant stems and leaves. The rust will start out as flecks and will eventually \n\tgrow into bumps. The plant rust will most likely appear on the underside of the leaves \n\tof the plant.";
	PlantDisease[9].Treat = " Remove and destroy affected leaves. Rust thrives in a wet environment, so do not overwater your \n\tplants. Also, make sure your plants have good air circulation inside the branches and \n\taround the plant itself. This will help it dry its leaves faster.";

	PlantPest[0].Name = " Aphids";
	PlantPest[0].Physical = " Small, soft-bodied, pear-shaped insects about 1/16– to 1/8-inch long. \n\tThey are usually green but may be pink, brown, black or yellow. Some aphids have a woolly \n\tor powdery appearance because of a waxy coat. Adults may or may not have wings.";
	PlantPest[0].Target = " Aphids are usually found feeding on new growth or the undersides of leaves. \n\tSome feed on roots. They suck plant sap, resulting in yellowing and misshapen leaves. \n\tIn addition, growth may be stunted, and new buds deformed. As aphids feed, they excrete a \n\tsugary material, called honeydew, which makes leaves shiny and sticky. Sooty mold fungi \n\tmay grow on the honeydew, producing unsightly dark splotches on the plant’s surfaces.";
	PlantPest[0].Control = " With minor infestations, handpicking, spraying with water or wiping the \n\tinsects with a cotton swab dipped in rubbing alcohol may be practical. For houseplants that \n\tare taken outdoors, spray with insecticidal soap, neem oil extract, pyrethrins, acetamiprid, \n\timidacloprid, cyfluthrin, or permethrin to control aphids.";

	PlantPest[1].Name = " Beetles";
	PlantPest[1].Physical = " The beetle possesses a hard shell, has four wings and legs, and it’s size \n\tcan range from 1/16 of an inch to 6 inches";
	PlantPest[1].Target = " Most beetles eat plant parts, either leaves or seeds or fruit or wood.";
	PlantPest[1].Control = " Remove and destroy the beetles. If houseplants are outside and beetles return \n\tand feed on foliage, spray with neem oil extract, acetamiprid, imidacloprid, cyfluthrin \n\tor permethrin to control them for one to two weeks.";

	PlantPest[2].Name = " Caterpillars";
	PlantPest[2].Physical = " Caterpillars are the larvae of butterflies and moths. They range in size from \n\tabout 1/8 inch to 2 or more inches long. Their color varies according to species with \n\tgray, brown, and green being common, as are mottled and striped colors. They may be smooth or \n\thave spines, hairs or bumps along their bodies.";
	PlantPest[2].Target = " Caterpillars have chewing mouthparts. Some feed openly on leaves, buds and \n\tflowers and can eat large portions of the plant in a relatively short period of time. \n\tOthers bore into stems to feed.";
	PlantPest[2].Control = " Remove and destroy caterpillars and eggs. If the houseplants are outside and \n\tadditional caterpillar feeding occurs, spray with neem oil extract, spinosad, cyfluthrin \n\tor permethrin to control them for one to two weeks.";

	PlantPest[3].Name = " Fungus Gnats";
	PlantPest[3].Physical = " Fungus gnat larvae may be up to 1/8 of an inch in length and have have shiny \n\tblack heads and can grow as large as 1/4-inch. Adult fungus gnats are a grayish-black \n\tcolor and have gray or see-through wings. Their long legs and long antennae give them a mosquito-\n\tlike appearance, though they are much, much smaller in size.";
	PlantPest[3].Target = " The larvae generally feed on decaying organic material or fungi growing in the \n\tsoil. The larvae of some species will also feed on roots.";
	PlantPest[3].Control = " For plants that can tolerate it (i.e. most houseplants, especially during \n\twinter), allow soil to dry between watering. Dry conditions will kill the larvae. Do not \n\tallow water to stand in the saucer beneath houseplant containers, and invert saucers beneath \n\tplants outside, so as to not collect rainwater. Products that contain strains of the \n\tbiological control agent Bacillus thuringiensis subsp. israelensis can be applied to the \n\tsoil of houseplants and watered into the soil for control.";

	PlantPest[4].Name = " Leafminers";
	PlantPest[4].Physical = " Leafminers are the larvae (immature worm-like stage) of a large number of \n\tdifferent insects.";
	PlantPest[4].Target = " The larvae feed between the upper and lower leaf surfaces. Leafminer damage \n\tappears as a winding, discolored trail or an irregular blotch within the leaf.";
	PlantPest[4].Control = " Remove and destroy any leaves showing leafminer damage. For houseplants that \n\tare outdoors, insecticidal sprays that have foliar systemic activity (the ability to \n\tmove into the leaves), such as acetamiprid, imidacloprid, or spinosad will control leafminers. \n\tImidacloprid plant spikes put into the soil are also effective.";

	PlantPest[5].Name = " Mealybugs";
	PlantPest[5].Physical = " Mealybugs are small, pale insects, related to scales. They are about 1/8 to \n\t1/4 inch long and move very sluggishly. The adult females cover themselves and their \n\teggs with a white, waxy material, making them look cottony. Some have waxy filaments that extend \n\tbeyond their bodies.";
	PlantPest[5].Target = " Mealybugs are most commonly found on the lower surfaces of leaves and in leaf \n\taxils (where the leaf attaches to the stem). One species feeds on the roots. They \n\tsuck plant sap, causing stunted and distorted growth and sometimes plant death. Like aphids, mealybugs \n\texcrete honeydew, providing the opportunity for growth of sooty mold fungi.";
	PlantPest[5].Control = " Light infestations can be controlled by removing individual mealybugs by hand \n\tor by wiping each insect with a cotton swab dipped in rubbing alcohol. An insecticidal \n\tsoap spray may also be used. With a heavy infestation, it may be necessary to discard the plant. \n\tFor houseplants that are outdoors, spray with neem oil extract, pyrethrins, \n\tacetamiprid, imidacloprid, cyfluthrin or permethrin to control mealybugs. Imidacloprid \n\tplant spikes put into the soil will also control mealybugs.";

	PlantPest[6].Name = " Root Ball Pests";
	PlantPest[6].Physical = " These are pests that infest the root balls of plants including pillbugs, \n\tmillipedes and slugs.";
	PlantPest[6].Target = " They are generally found along the exterior of the root ball in small cavities \n\tcarved from the potting mix. Ants may also make nests within the potting soil of \n\thouseplants while outside.";
	PlantPest[6].Control = " The plant container can be gently removed to inspect for pillbugs, millipedes \n\tand slugs, which simply can be scraped away. Ant colonies in the container may be \n\tkilled by soil drenches of products containing cyfluthrin or permethrin. Mix insecticide at the \n\tsame rate as for spraying, and pour solution through soil in container. Allow pots to \n\tthoroughly drain and dry before bringing indoors.";

	PlantPest[7].Name = " Scales";
	PlantPest[7].Physical = " Scale insects can be divided into two groups: armored scales and soft \n\tscales. An armored scale secretes a waxy covering that is not an integral part of its body. \n\tThe covering can be scraped off to locate the insect living beneath it. In contrast, the waxy \n\tcovering that a soft scale secretes is an integral part of its body. Adults are small \n\tand immobile with no visible legs. Some are flat and appear like fish scales stuck to \n\ta plant. Others look like waxy, colored masses. They range in size from 1/16 to ½-inch in diameter.";
	PlantPest[7].Target = " They are usually found on stems and the undersides of leaves, but may be \n\tfound on upper surfacesas well. Scales feed by sucking plant sap.";
	PlantPest[7].Control = " Early infestations of scales can be removed by scraping with a fingernail. \n\tAdult scales are relatively protected from insecticides by their waxy covering. \n\tHowever, for houseplants outdoors, sprays with products containing neem oil extract or canola oil help \n\tcontrol adult scale insects by smothering. Their crawlers are susceptible to many \n\tinsecticides, such as insecticidal soap, neem oil extract, canola oil, pyrethrins, \n\tacetamiprid, imidacloprid, cyfluthrin or permethrin.";

	PlantPest[8].Name = " Spider Mites";
	PlantPest[8].Physical = " Mites are not insects but are more closely related to spiders. Since \n\tthey are extremely small, plant damage is typically the first sign of their presence. A silky \n\tweb is often seen with heavier infestations.";
	PlantPest[8].Target = " Both spider mite adults and their immature forms damage plants by sucking \n\tplant sap. Damage includes light-colored speckling on the upper surface of leaves, and \n\tresults in a plant with an overall faded look. If the mites are left unchecked, leaves become \n\tbronzed or yellowed, and the plant dies. ";
	PlantPest[8].Control = " Spray sturdy plants forcefully with water, including the undersides of \n\tleaves, to dislodge mites and break up their webs. Plants also can be sprayed with an \n\tinsecticidal soap. For houseplants that are outdoors, spray with insecticidal soap, neem oil extract \n\tor an insecticide containing sulfur. It is often necessary to spray once a week for \n\tseveral weeks to control mites.";

	PlantPest[9].Name = " Springtails";
	PlantPest[9].Physical = " Springtails are tiny insects about 1/5- inch long that inhabit the soil. \n\tThey vary in color but are usually white or black. They are wingless, but can jump. \n\tTheir presence is usually a sign of overwatering.";
	PlantPest[9].Target = " While springtails normally feed on decaying organic matter, they will chew \n\ton seedlings or tender plant parts. Damage is usually minimal.";
	PlantPest[9].Control = " For plants that can tolerate it (most plants), let the soil dry between watering.";

	PlantPest[10].Name = " Thrips";
	PlantPest[10].Physical = " Thrips are tiny, slender, yellowish to blackish insects with fringed \n\twings. At less than 1/16 inch in length, the adults are very difficult to see without a \n\tmagnifying lens. Blowing lightly into blooms and leaves causes thrips to move around quickly, \n\tmaking them easier to see.";
	PlantPest[10].Target = " They are typically found on leaves and between flower petals. Both \n\tadults and nymphs (immature stage) feed by scraping surface cells to suck plant sap. Leaves fed \n\ton by thrips will often take on a silvery or speckled appearance similar to damage caused \n\tby mites.";
	PlantPest[10].Control = " Rinse leaves with water. Spray plants with an insecticidal soap. For \n\thouseplants that are outdoors, spray foliage with spinosad, acetamiprid, imidacloprid, cyfluthrin \n\tor permethrin to control thrips. For plants with flower buds infested with thrips, the \n\tinsecticide must have systemic activity, such as spinosad, acetamiprid or imidacloprid, \n\tin order to control the hidden thrips. Imidacloprid plant spikes put into the soil are also effective.";

	PlantPest[11].Name = " Whiteflies";
	PlantPest[11].Physical = " Whiteflies are not true flies, but are more closely related to scales, \n\tmealybugs and aphids. They are very small about 1/10 to 1/16 -inch long. They have a powdery \n\twhite appearance and resemble tiny moths. When at rest, the wings are held at an angle, \n\troof-like over the body. The immature stage is scale-like and does not move.";
	PlantPest[11].Target = " Both the adults and their immature forms feed by sucking plant sap. The \n\tdamage that they cause is similar to that caused by aphids. The infested plant may be stunted. \n\tLeaves turn yellow and die. Like aphids, whiteflies excrete honeydew, which makes leaves \n\tshiny and sticky and encourages the growth of sooty mold fungi. When plants that are \n\tinfested with whiteflies are disturbed, the whiteflies flutter around for a while before settling again.";
	PlantPest[11].Control = " Wash the plant. Spray the plant thoroughly with insecticidal soap, \n\tespecially the lower leaf surfaces. Imidacloprid plant spikes put into the soil will also control \n\twhiteflies. For houseplants that are taken outdoors, spray with insecticidal soap, neem oil \n\textract, acetamiprid, imidacloprid, cyfluthrin or permethrin to control whiteflies. ";
}

void printPlantDisorder(PlantDisorder PlantDisorder)
{
	gotoxy(0, 4);
	SetColorAndBackground(15, 0); cout << "\t[NAME]";
	SetColorAndBackground(0, 15); cout << PlantDisorder.Name;
	SetColorAndBackground(15, 0); cout << "\n\n\t[CAUSE OF DISEASE]";
	SetColorAndBackground(0, 15); cout << PlantDisorder.Cause;
	SetColorAndBackground(15, 0); cout << "\n\n\t[SYMPTOMS]";
	SetColorAndBackground(0, 15); cout << PlantDisorder.Symptoms;
	SetColorAndBackground(15, 0); cout << "\n\n\t[TREATMENT]";
	SetColorAndBackground(0, 15); cout << PlantDisorder.Treat;
	gotoxy(5, 27); getch();
}
void printPlantPests(Pests Pests)
{
	gotoxy(0, 4);
	SetColorAndBackground(15, 0); cout << "\t[NAME]";
	SetColorAndBackground(0, 15); cout << Pests.Name << endl;
	SetColorAndBackground(15, 0); cout << "\n\n\t[PHYSICAL APPEARANCE]";
	SetColorAndBackground(0, 15); cout << Pests.Physical;
	SetColorAndBackground(15, 0); cout << "\n\n\t[TARGET ON PLANTS]";
	SetColorAndBackground(0, 15); cout << Pests.Target;
	SetColorAndBackground(15, 0); cout << "\n\n\t[INFESTATION CONTROL]";
	SetColorAndBackground(0, 15); cout << Pests.Control;
	gotoxy(5, 27); getch();
}

void leafCheckUp()
{
	char leafChoice;
	do {
		clrscr();
		border();

		gotoxy(51, 4); SetColorAndBackground(15, 0);
		cout << "                    ";
		gotoxy(51, 5); SetColorAndBackground(15, 0);
		cout << "  [CHECK-UP: LEAF]  ";
		gotoxy(51, 6); SetColorAndBackground(15, 0);
		cout << "                    ";

		gotoxy(28, 8); SetColorAndBackground(0, 15);
		cout << "[Select the applicable disease symptoms on your plant's leaves]";
		gotoxy(41, 10); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Yellow or Dark Brown Tips";
		gotoxy(41, 11); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Yellow or Brown Spots";
		gotoxy(41, 12); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Powdery Leaf Spots";
		gotoxy(41, 13); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Water Soaked Spots";
		gotoxy(41, 14); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Rust-Colored Bumps";
		gotoxy(41, 15); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Leaves Wilting";
		gotoxy(41, 16); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - Leaves Dropping";
		gotoxy(41, 17); SetColorAndBackground(15, 0);
		cout << "[H]"; SetColorAndBackground(0, 15); cout << " - Leaves covered with black mold";
		gotoxy(41, 18); SetColorAndBackground(15, 0);
		cout << "[I]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(41, 19); SetColorAndBackground(15, 0);
		cout << "[J]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> leafChoice;
		leafChoice = (char)toupper(leafChoice);

		switch (leafChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(51, 2);  SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(51, 2);  SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[1]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[4]);
			break;
		}
		case 'D':
		{
			char choice;
			do {
				clrscr(); border(); gotoxy(51, 8); SetColorAndBackground(15, 0);

				cout << "[PLANT DIAGNOSIS]";
				gotoxy(41, 10); SetColorAndBackground(15, 0);
				cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Bacterial Leaf Spots";
				gotoxy(41, 11); SetColorAndBackground(15, 0);
				cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Oedema";
				gotoxy(41, 12); SetColorAndBackground(15, 0);
				cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Return";
				gotoxy(5, 27); SetColorAndBackground(15, 0);
				gotoxy(5, 27); SetColorAndBackground(0, 9);

				cout << "INPUT:";
				gotoxy(12, 27); SetColorAndBackground(4, 7);
				cout << "           ";
				gotoxy(13, 27);
				cin >> choice;
				choice = toupper(choice);

				switch (choice)
				{
				case 'A':
				{
					clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
					cout << "[PLANT DIAGNOSIS]";
					SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[2]);
					break;
				}
				case 'B':
				{
					clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
					cout << "[PLANT DIAGNOSIS]";
					SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[5]);
					break;
				}
				default:
					gotoxy(5, 27); getch();
					break;
				}
			} while (choice == 'A' || choice == 'B');
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[9]);
			break;
		}
		case 'F':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[3]);
			break;
		}
		case 'G':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[7]);
			break;
		}
		case 'H':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[8]);
			break;
		}
		case 'I':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			gotoxy(42, 12); SetColorAndBackground(0, 15);
			cout << "The leaf of your plant is healthy!";
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (leafChoice == 'A' || leafChoice == 'B' || leafChoice == 'C' || leafChoice == 'D' || leafChoice == 'E' || leafChoice == 'F' || leafChoice == 'G' || leafChoice == 'H' || leafChoice == 'I');
}
void stemCheckUp()
{
	char stemChoice;
	do {
		clrscr();
		border();

		gotoxy(51, 7); SetColorAndBackground(15, 0);
		cout << "                    ";
		gotoxy(51, 8); SetColorAndBackground(15, 0);
		cout << "  [CHECK-UP: STEM]  ";
		gotoxy(51, 9); SetColorAndBackground(15, 0);
		cout << "                    ";

		gotoxy(28, 11); SetColorAndBackground(0, 15);
		cout << "[Select the applicable disease symptoms of your plant's stem]";
		gotoxy(47, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Stem Wilting";
		gotoxy(47, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Rust-Colored Stems";
		gotoxy(47, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - None of the above";
		gotoxy(47, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> stemChoice;
		stemChoice = (char)toupper(stemChoice);

		switch (stemChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[3]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[9]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			gotoxy(42, 12); SetColorAndBackground(0, 15);
			cout << "The stem of your plant is healthy!";
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (stemChoice == 'A' || stemChoice == 'B' || stemChoice == 'C');
}
void rootCheckUp()
{
	char rootChoice;
	do {
		clrscr();
		border();

		gotoxy(51, 8); SetColorAndBackground(15, 0);
		cout << "                    ";
		gotoxy(51, 9); SetColorAndBackground(15, 0);
		cout << "  [CHECK-UP: ROOT]  ";
		gotoxy(51, 10); SetColorAndBackground(15, 0);
		cout << "                    ";

		gotoxy(28, 12); SetColorAndBackground(0, 15);
		cout << "[Select the applicable disease symptoms of your plant's roots]";
		gotoxy(44, 14); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Brown or Black Soft Roots";
		gotoxy(44, 15); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(44, 16); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> rootChoice;
		rootChoice = (char)toupper(rootChoice);

		switch (rootChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[3]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			gotoxy(42, 12); SetColorAndBackground(0, 15);
			cout << "The root of your plant is healthy!";
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (rootChoice == 'A' || rootChoice == 'B');
}
void flowerCheckUp()
{
	char flowerChoice;
	do {
		clrscr();
		border();

		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "                      ";
		gotoxy(50, 9); SetColorAndBackground(15, 0);
		cout << "  [CHECK-UP: FLOWER]  ";
		gotoxy(50, 10); SetColorAndBackground(15, 0);
		cout << "                      ";

		gotoxy(28, 12); SetColorAndBackground(0, 15);
		cout << "[Select the applicable disease symptoms of your plant's flowers]";
		gotoxy(29, 14); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Spotting, discoloration, and wilting of buds or flowers";
		gotoxy(29, 15); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(29, 16); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> flowerChoice;
		flowerChoice = (char)toupper(flowerChoice);

		switch (flowerChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			SetColorAndBackground(0, 15); printPlantDisorder(PlantDisease[8]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(51, 2); SetColorAndBackground(15, 0);
			cout << "[PLANT DIAGNOSIS]";
			gotoxy(41, 8); SetColorAndBackground(0, 15);
			cout << "The flower of your plant is healthy!";
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (flowerChoice == 'A' || flowerChoice == 'B');
}

void plantCheckUp()
{
	char PartChoice;
	do {
		clrscr();
		border();

		gotoxy(50, 7); SetColorAndBackground(15, 0);
		cout << "                      ";
		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "  [DISEASE CHECK-UP]  ";
		gotoxy(50, 9); SetColorAndBackground(15, 0);
		cout << "                      ";

		gotoxy(22, 11); SetColorAndBackground(0, 15);
		cout << "[Select the part of your plant you want to check for diseases or problems]";
		gotoxy(53, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Leaves";
		gotoxy(53, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Stems";
		gotoxy(53, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Roots";
		gotoxy(53, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Flowers";
		gotoxy(53, 17); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> PartChoice;
		PartChoice = (char)toupper(PartChoice);

		switch (PartChoice)
		{
		case 'A':
		{
			leafCheckUp();
			break;
		}
		case 'B':
		{
			stemCheckUp();
			break;
		}
		case 'C':
		{
			rootCheckUp();
			break;
		}
		case 'D':
		{
			flowerCheckUp();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (PartChoice == 'A' || PartChoice == 'B' || PartChoice == 'C' || PartChoice == 'D');
}

void listDisease()
{
	char diseaseListChoice;
	do {
		clrscr();
		border();

		gotoxy(45, 4); SetColorAndBackground(15, 0);
		cout << "                                ";
		gotoxy(45, 5); SetColorAndBackground(15, 0);
		cout << "  [COMMON HOUSEPLANT DISEASES]  ";
		gotoxy(45, 6); SetColorAndBackground(15, 0);
		cout << "                                ";

		gotoxy(28, 8); SetColorAndBackground(0, 15);
		cout << "[This section shows the list of the common houseplant diseases]";
		gotoxy(46, 10); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Anthracnose";
		gotoxy(46, 11); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Bacterial Leaf Spots";
		gotoxy(46, 12); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Botrytis Blight";
		gotoxy(46, 13); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Fungal Leaf Spots";
		gotoxy(46, 14); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Leaf Drop";
		gotoxy(46, 15); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Oedema";
		gotoxy(46, 16); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - Powdery Mildew";
		gotoxy(46, 17); SetColorAndBackground(15, 0);
		cout << "[H]"; SetColorAndBackground(0, 15); cout << " - Root and Stem Rot";
		gotoxy(46, 18); SetColorAndBackground(15, 0);
		cout << "[I]"; SetColorAndBackground(0, 15); cout << " - Rust";
		gotoxy(46, 19); SetColorAndBackground(15, 0);
		cout << "[J]"; SetColorAndBackground(0, 15); cout << " - Sooty Mold";
		gotoxy(46, 20); SetColorAndBackground(15, 0);
		cout << "[K]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> diseaseListChoice;
		diseaseListChoice = (char)toupper(diseaseListChoice);

		switch (diseaseListChoice)
		{
		case 'A':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[2]);
			break;
		}
		case 'C':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[8]);
			break;
		}
		case 'D':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[1]);
			break;
		}
		case 'E':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[6]);
			break;
		}
		case 'F':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[5]);
			break;
		}
		case 'G':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[4]);
			break;
		}
		case 'H':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[3]);
			break;
		}
		case 'I':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[9]);
			break;
		}
		case 'J':
		{
			clrscr(); border();
			printPlantDisorder(PlantDisease[7]);
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (diseaseListChoice == 'A' || diseaseListChoice == 'B' || diseaseListChoice == 'C' || diseaseListChoice == 'D' || diseaseListChoice == 'E' || diseaseListChoice == 'F' || diseaseListChoice == 'G' || diseaseListChoice == 'H' || diseaseListChoice == 'I' || diseaseListChoice == 'J');
}
void listPests()
{
	char pestsListChoice;
	do {
		clrscr();
		border();

		gotoxy(47, 3); SetColorAndBackground(15, 0);
		cout << "                             ";
		gotoxy(47, 4); SetColorAndBackground(15, 0);
		cout << "  [COMMON HOUSEPLANT PESTS]  ";
		gotoxy(47, 5); SetColorAndBackground(15, 0);
		cout << "                             ";

		gotoxy(29, 7); SetColorAndBackground(0, 15);
		cout << "[This section shows the list of the common houseplant pests]";
		gotoxy(49, 9); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Aphids";
		gotoxy(49, 10); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Beetles";
		gotoxy(49, 11); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Caterpillars";
		gotoxy(49, 12); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Fungus Gnats";
		gotoxy(49, 13); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Leafminers";
		gotoxy(49, 14); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Mealybugs";
		gotoxy(49, 15); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - Root Ball Pests";
		gotoxy(49, 16); SetColorAndBackground(15, 0);
		cout << "[H]"; SetColorAndBackground(0, 15); cout << " - Scales";
		gotoxy(49, 17); SetColorAndBackground(15, 0);
		cout << "[I]"; SetColorAndBackground(0, 15); cout << " - Spider Mites";
		gotoxy(49, 18); SetColorAndBackground(15, 0);
		cout << "[J]"; SetColorAndBackground(0, 15); cout << " - Springtails";
		gotoxy(49, 19); SetColorAndBackground(15, 0);
		cout << "[K]"; SetColorAndBackground(0, 15); cout << " - Thrips";
		gotoxy(49, 20); SetColorAndBackground(15, 0);
		cout << "[L]"; SetColorAndBackground(0, 15); cout << " - Whiteflies";
		gotoxy(49, 21); SetColorAndBackground(15, 0);
		cout << "[M]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestsListChoice;
		pestsListChoice = (char)toupper(pestsListChoice);

		switch (pestsListChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[1]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[2]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[3]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[4]);
			break;
		}
		case 'F':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[5]);
			break;
		}
		case 'G':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[6]);
			break;
		}
		case 'H':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[7]);
			break;
		}
		case 'I':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[8]);
			break;
		}
		case 'J':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[9]);
			break;
		}
		case 'K':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[10]);
			break;
		}
		case 'L':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[11]);
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestsListChoice == 'A' || pestsListChoice == 'B' || pestsListChoice == 'C' || pestsListChoice == 'D' || pestsListChoice == 'E' || pestsListChoice == 'F' || pestsListChoice == 'G' || pestsListChoice == 'H' || pestsListChoice == 'I' || pestsListChoice == 'J' || pestsListChoice == 'K' || pestsListChoice == 'L');
}

void pestUnderLeaf()
{
	char pestUnderLeafChoice;
	do {
		clrscr();
		border();

		gotoxy(46, 5); SetColorAndBackground(15, 0);
		cout << "                            ";
		gotoxy(46, 6); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: UNDER LEAF]  ";
		gotoxy(46, 7); SetColorAndBackground(15, 0);
		cout << "                            ";

		gotoxy(24, 9); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(45, 11); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Shiny and sticky leaves";
		gotoxy(45, 12); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Missing leaf edges";
		gotoxy(45, 13); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - White Oval Cottony Bugs";
		gotoxy(45, 14); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Strongly sticking bugs";
		gotoxy(45, 15); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Covered in Silk Webs";
		gotoxy(45, 16); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - White Flying Insects";
		gotoxy(45, 17); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(45, 18); SetColorAndBackground(15, 0);
		cout << "[H]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestUnderLeafChoice;
		pestUnderLeafChoice = (char)toupper(pestUnderLeafChoice);

		switch (pestUnderLeafChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[2]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[5]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[7]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[8]);
			break;
		}
		case 'F':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[11]);
			break;
		}
		case 'G':
		{
			clrscr(); border(); gotoxy(35, 13); SetColorAndBackground(0, 15);
			cout << "The Underside of your Leaves is free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestUnderLeafChoice == 'A' || pestUnderLeafChoice == 'B' || pestUnderLeafChoice == 'C' || pestUnderLeafChoice == 'D' || pestUnderLeafChoice == 'E' || pestUnderLeafChoice == 'F' || pestUnderLeafChoice == 'G');
}
void pestUpperLeaf()
{
	char pestUpperLeafChoice;
	do {
		clrscr();
		border();

		gotoxy(47, 6); SetColorAndBackground(15, 0);
		cout << "                            ";
		gotoxy(47, 7); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: UPPER LEAF]  ";
		gotoxy(47, 8); SetColorAndBackground(15, 0);
		cout << "                            ";

		gotoxy(24, 10); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(29, 12); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Skeletonizing or Holes on Leaves";
		gotoxy(29, 13); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Discolored trail or an irregular blotch within the leaf";
		gotoxy(29, 14); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Strongly sticking bugs";
		gotoxy(29, 15); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Covered in Silk Webs";
		gotoxy(29, 16); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Speckled Leaves";
		gotoxy(29, 17); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(29, 18); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestUpperLeafChoice;
		pestUpperLeafChoice = (char)toupper(pestUpperLeafChoice);

		switch (pestUpperLeafChoice)
		{
		case 'A':
		{
			{
				char choice;
				do {
					clrscr();
					border();

					gotoxy(49, 8); SetColorAndBackground(15, 0);
					cout << "[PEST IDENTIFICATION]";
					gotoxy(51, 10); SetColorAndBackground(15, 0);
					cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Beetles";
					gotoxy(51, 11); SetColorAndBackground(15, 0);
					cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Caterpillar";
					gotoxy(51, 12); SetColorAndBackground(15, 0);
					cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Springtails";
					gotoxy(51, 13); SetColorAndBackground(15, 0);
					cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Return";

					gotoxy(5, 27); SetColorAndBackground(0, 9);
					cout << "INPUT:";
					gotoxy(12, 27); SetColorAndBackground(4, 7);
					cout << "           ";
					gotoxy(13, 27);
					cin >> choice;
					choice = toupper(choice);

					switch (choice)
					{
					case 'A':
					{
						clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
						cout << "[PEST IDENTIFICATION]";
						SetColorAndBackground(0, 15); printPlantPests(PlantPest[1]);
						break;
					}
					case 'B':
					{
						clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
						cout << "[PEST IDENTIFICATION]";
						SetColorAndBackground(0, 15); printPlantPests(PlantPest[2]);
						break;
					}
					case 'C':
					{
						clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
						cout << "[PEST IDENTIFICATION]";
						SetColorAndBackground(0, 15); printPlantPests(PlantPest[9]);
						break;
					}
					default:
						gotoxy(5, 27); getch();
					}
				} while (choice == 'A' || choice == 'B' || choice == 'C');
			}
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[4]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[7]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[8]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[10]);
			break;
		}
		case 'F':
		{
			clrscr(); border(); gotoxy(35, 13); SetColorAndBackground(0, 15);
			cout << "The Upperside of your Leaves is free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestUpperLeafChoice == 'A' || pestUpperLeafChoice == 'B' || pestUpperLeafChoice == 'C' || pestUpperLeafChoice == 'D' || pestUpperLeafChoice == 'E' || pestUpperLeafChoice == 'F');
}
void pestLeafAxil()
{
	char pestLeafAxilChoice;
	do {
		clrscr();
		border();

		gotoxy(48, 8); SetColorAndBackground(15, 0);
		cout << "                           ";
		gotoxy(48, 9); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: LEAF AXIL]  ";
		gotoxy(48, 10); SetColorAndBackground(15, 0);
		cout << "                           ";

		gotoxy(24, 12); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(45, 14); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - White Oval Cottony Bugs";
		gotoxy(45, 15); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(45, 16); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestLeafAxilChoice;
		pestLeafAxilChoice = (char)toupper(pestLeafAxilChoice);

		switch (pestLeafAxilChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[5]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(36, 13);
			SetColorAndBackground(0, 15); cout << "The Leaf Axil of your plant is free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestLeafAxilChoice == 'A' || pestLeafAxilChoice == 'B');
}
void pestStem()
{
	char pestStemChoice;
	do {
		clrscr();
		border();

		gotoxy(50, 7); SetColorAndBackground(15, 0);
		cout << "                      ";
		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: STEM]  ";
		gotoxy(50, 9); SetColorAndBackground(15, 0);
		cout << "                      ";

		gotoxy(24, 11); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(44, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Decaying Stems with Bites";
		gotoxy(44, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Missing Stem Edges";
		gotoxy(44, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Strongly sticking bugs";
		gotoxy(44, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Covered in Silk Webs";
		gotoxy(44, 17); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(44, 18); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestStemChoice;
		pestStemChoice = (char)toupper(pestStemChoice);

		switch (pestStemChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[1]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[2]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[7]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[8]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(38, 13); SetColorAndBackground(0, 15);
			cout << "The Stem of your plant is free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestStemChoice == 'A' || pestStemChoice == 'B' || pestStemChoice == 'C' || pestStemChoice == 'D' || pestStemChoice == 'E');
}
void pestFlower()
{
	char pestFlowerChoice;
	do {
		clrscr();
		border();

		gotoxy(49, 8); SetColorAndBackground(15, 0);
		cout << "                         ";
		gotoxy(49, 9); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: FLOWERS]  ";
		gotoxy(49, 10); SetColorAndBackground(15, 0);
		cout << "                         ";

		gotoxy(24, 12); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(36, 14); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Missing Flower Edges";
		gotoxy(36, 15); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Yellowish slender insects between petals";
		gotoxy(36, 16); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(36, 17); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestFlowerChoice;
		pestFlowerChoice = (char)toupper(pestFlowerChoice);

		switch (pestFlowerChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[2]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[10]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(37, 13); SetColorAndBackground(0, 15);
			cout << "The Flower of your plant is free from pests!" << endl;
			gotoxy(5, 27); getch(); break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestFlowerChoice == 'A' || pestFlowerChoice == 'B' || pestFlowerChoice == 'C');
}
void pestRoots()
{
	char pestRootChoice;
	do {
		clrscr();
		border();

		gotoxy(50, 7); SetColorAndBackground(15, 0);
		cout << "                       ";
		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: ROOTS]  ";
		gotoxy(50, 9); SetColorAndBackground(15, 0);
		cout << "                       ";

		gotoxy(24, 11); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(38, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Sooty Mold Fungi growth";
		gotoxy(38, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Mosquito-like insects on plant surface";
		gotoxy(38, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - White Cottony texture around the roots";
		gotoxy(38, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Crawlers near the root ball";
		gotoxy(38, 17); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(38, 18); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestRootChoice;
		pestRootChoice = (char)toupper(pestRootChoice);

		switch (pestRootChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[3]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[5]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[6]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(37, 13); SetColorAndBackground(0, 15);
			cout << "The Roots of your plant are free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestRootChoice == 'A' || pestRootChoice == 'B' || pestRootChoice == 'C' || pestRootChoice == 'D' || pestRootChoice == 'E');
}
void pestSoil()
{
	char pestSoilChoice;
	do {
		clrscr();
		border();

		gotoxy(50, 7); SetColorAndBackground(15, 0);
		cout << "                      ";
		gotoxy(50, 8); SetColorAndBackground(15, 0);
		cout << "  [PEST CHECK: SOIL]  ";
		gotoxy(50, 9); SetColorAndBackground(15, 0);
		cout << "                      ";

		gotoxy(24, 11); SetColorAndBackground(0, 15);
		cout << "[Select the applicable characteristics or signs of pests on your plant]";
		gotoxy(39, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Sooty Mold Fungi growth";
		gotoxy(39, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Tiny worms feeding on roots";
		gotoxy(39, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Crawlers near the root ball surface";
		gotoxy(39, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Jumping Insects when Watered";
		gotoxy(39, 17); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - None of the Above";
		gotoxy(39, 18); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> pestSoilChoice;
		pestSoilChoice = (char)toupper(pestSoilChoice);

		switch (pestSoilChoice)
		{
		case 'A':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[0]);
			break;
		}
		case 'B':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[3]);
			break;
		}
		case 'C':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[6]);
			break;
		}
		case 'D':
		{
			clrscr(); border(); gotoxy(49, 2); SetColorAndBackground(15, 0);
			cout << "[PEST IDENTIFICATION]";
			SetColorAndBackground(0, 15); printPlantPests(PlantPest[9]);
			break;
		}
		case 'E':
		{
			clrscr(); border(); gotoxy(38, 13);
			cout << "The Soil of your plant is free from pests!" << endl;
			gotoxy(5, 27); getch();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (pestSoilChoice == 'A' || pestSoilChoice == 'B' || pestSoilChoice == 'C' || pestSoilChoice == 'D' || pestSoilChoice == 'E');
}

void identifyPests()
{
	char locationChoice;
	do {
		clrscr();
		border();

		gotoxy(47, 5); SetColorAndBackground(15, 0);
		cout << "                             ";
		gotoxy(47, 6); SetColorAndBackground(15, 0);
		cout << "  [IDENTIFYING PLANT PESTS]  ";
		gotoxy(47, 7); SetColorAndBackground(15, 0);
		cout << "                             ";
		gotoxy(20, 9); SetColorAndBackground(0, 15);
		cout << "[This section will determine the plant pests based on its location]";
		gotoxy(33, 11); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Underside of Leaves";
		gotoxy(33, 12); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - Upperside of Leaves";
		gotoxy(33, 13); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Leaf Axil (where the leaf attaches to the stem)";
		gotoxy(33, 14); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - Stems";
		gotoxy(33, 15); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Flowers";
		gotoxy(33, 16); SetColorAndBackground(15, 0);
		cout << "[F]"; SetColorAndBackground(0, 15); cout << " - Roots";
		gotoxy(33, 17); SetColorAndBackground(15, 0);
		cout << "[G]"; SetColorAndBackground(0, 15); cout << " - Soil";
		gotoxy(33, 18); SetColorAndBackground(15, 0);
		cout << "[H]"; SetColorAndBackground(0, 15); cout << " - Return";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> locationChoice;
		locationChoice = (char)toupper(locationChoice);

		switch (locationChoice)
		{
		case 'A':
		{
			pestUnderLeaf();
			break;
		}
		case 'B':
		{
			pestUpperLeaf();
			break;
		}
		case 'C':
		{
			pestLeafAxil();
			break;
		}
		case 'D':
		{
			pestStem();
			break;
		}
		case 'E':
		{
			pestFlower();
			break;
		}
		case 'F':
		{
			pestRoots();
			break;
		}
		case 'G':
		{
			pestSoil();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (locationChoice == 'A' || locationChoice == 'B' || locationChoice == 'C' || locationChoice == 'D' || locationChoice == 'E' || locationChoice == 'F' || locationChoice == 'G');
}
int checkUp()
{
	DisorderPestInfo();
	char diseaseChoice;
	do {
		clrscr();
		border();

		gotoxy(49, 7); SetColorAndBackground(15, 0);
		cout << "                          ";
		gotoxy(49, 8); SetColorAndBackground(15, 0);
		cout << "  [HOUSEPLANT DISORDERS]  ";
		gotoxy(49, 9); SetColorAndBackground(15, 0);
		cout << "                          ";
		gotoxy(27, 11); SetColorAndBackground(0, 15);
		cout << "[This section can list out the possible diseases a houseplant has]";
		gotoxy(42, 13); SetColorAndBackground(15, 0);
		cout << "[A]"; SetColorAndBackground(0, 15); cout << " - Plant Check-Up";
		gotoxy(42, 14); SetColorAndBackground(15, 0);
		cout << "[B]"; SetColorAndBackground(0, 15); cout << " - List of Common Plant Diseases";
		gotoxy(42, 15); SetColorAndBackground(15, 0);
		cout << "[C]"; SetColorAndBackground(0, 15); cout << " - Identify Plant Pest";
		gotoxy(42, 16); SetColorAndBackground(15, 0);
		cout << "[D]"; SetColorAndBackground(0, 15); cout << " - List of Common Plant Pests";
		gotoxy(42, 17); SetColorAndBackground(15, 0);
		cout << "[E]"; SetColorAndBackground(0, 15); cout << " - Return ";

		gotoxy(5, 27); SetColorAndBackground(0, 9);
		cout << "INPUT:";
		gotoxy(12, 27); SetColorAndBackground(4, 7);
		cout << "           ";
		gotoxy(13, 27);
		cin >> diseaseChoice;
		diseaseChoice = (char)toupper(diseaseChoice);

		switch (diseaseChoice)
		{
		case 'A':
		{
			clrscr(); border();
			plantCheckUp();
			break;
		}
		case 'B':
		{
			clrscr(); border();
			listDisease();
			break;
		}
		case 'C':
		{
			identifyPests();
			break;
		}
		case 'D':
		{
			listPests();
			break;
		}
		default:
			gotoxy(5, 27); getch();
			break;
		}
	} while (diseaseChoice == 'A' || diseaseChoice == 'B' || diseaseChoice == 'C');
	return 0;
}
