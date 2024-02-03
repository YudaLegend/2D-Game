#ifndef _SCENE_INCLUDE
#define _SCENE_INCLUDE


#include <glm/glm.hpp>
#include "ShaderProgram.h"
#include "TileMap.h"
#include "BigMario.h"
#include "Player.h"
#include "BackgroundMap.h"
#include "MushMonster.h"
#include "Turtle.h"
#include "GameUI.h"
#include "InterrogantBlock.h"
#include "JumpingMoney.h"
#include "MushRoom.h"
#include "Star.h"
#include "Block.h"
#include "Coins.h"

// Scene contains all the entities of our game.
// It is responsible for updating and render them.


class Scene
{

public:
	Scene();
	~Scene();
	bool initMush();
	void init(int level);
	void update(int deltaTime);
	void render();
	void reshape(int w, int h);
	void initMap(int level);
	bool initEnemies();
	bool initIntBlocks();
	bool initJmoneys();
	void initGameUI();
	bool initStar();
	bool MarioUpEnemy(Player& p, Enemy& e);
	bool initDetrui_block();
	void clear();
	bool initCoins();
	bool initIntBlocks2();
	bool initJmoneys2();
	bool initMush2();
	bool initCoins2();
	bool initStar2();
	bool initDetrui_block2();
private:
	void initShaders();

private:
	string fileName;
	TileMap* map;
	BackgroundMap* mapBackground;
	Player* player;
	ShaderProgram texProgram;
	ShaderProgram* shaderProgram;
	float currentTime;
	glm::mat4 projection;
	GameUI* gameUI;
	vector<Enemy*> enemies;

	vector<InterrogantBlock*> int_blocks;
	vector<glm::ivec2> pos_blocks2 = { glm::vec2(10,9), glm::vec2(11,9), glm::vec2(12,9), glm::vec2(13,9),glm::vec2(14,9)};
	vector<glm::ivec2> pos_blocks = {glm::vec2(16,9), glm::vec2(21,9), glm::vec2(22,5), glm::vec2(23,9),glm::vec2(78,9), glm::vec2(94,5),glm::vec2(106,9),glm::vec2(109,5),glm::vec2(109,9),glm::vec2(112,9),glm::vec2(129,5),glm::vec2(130,5),glm::vec2(170,9) };

	vector<MushRoom*> mush;

	vector<glm::ivec2> pos_mush = { glm::vec2(21,9) ,glm::vec2(78,9), glm::vec2(109,5) };
	vector<glm::ivec2> pos_mush2 = { glm::vec2(10,9) };
	vector<JumpingMoney*> jmoneys;

	vector<glm::ivec2> pos_jmoneys = { glm::vec2(16,9), glm::vec2(22,5), glm::vec2(23,9), glm::vec2(94,5),glm::vec2(106,9),glm::vec2(109,9),glm::vec2(112,9),glm::vec2(129,5),glm::vec2(130,5),glm::vec2(170,9) };
	vector<glm::ivec2> pos_jmoneys2 = { glm::vec2(11,9), glm::vec2(12,9), glm::vec2(13,9),glm::vec2(14,9) };
	
	vector<Star*> star;

	vector<glm::ivec2> pos_star = { glm::vec2(16,9) };
	vector<glm::ivec2> pos_star2 = { glm::vec2(22,5)};

	vector<Coins*> coins;
	vector<glm::ivec2> pos_coins2 = { glm::vec2(40,9),glm::vec2(41,7),glm::vec2(42,7),glm::vec2(43,7),glm::vec2(58,9),glm::vec2(59,9),glm::vec2(60,9),glm::vec2(61,9), glm::vec2(85,5),glm::vec2(86,5),glm::vec2(87,5),glm::vec2(88,5) };
	vector<glm::ivec2> pos_coins = { glm::vec2(212,7),glm::vec2(213,7),glm::vec2(214,7),glm::vec2(215,7),glm::vec2(216,7),glm::vec2(217,7),glm::vec2(218,7) };
	vector<Block*> destruit_blocks;

	vector<glm::ivec2> pos_destru_blocks = { glm::vec2(20,9), glm::vec2(22,9), glm::vec2(24,9), glm::vec2(77,9), glm::vec2(79,9), glm::vec2(80,5),glm::vec2(81,5),glm::vec2(82,5),glm::vec2(83,5),glm::vec2(84,5),glm::vec2(85,5),glm::vec2(86,5),glm::vec2(87,5),glm::vec2(91,5),glm::vec2(92,5),glm::vec2(93,5), glm::vec2(94,9),glm::vec2(100,9),glm::vec2(101,9),glm::vec2(118,9),glm::vec2(121,5), glm::vec2(122,5), glm::vec2(123,5),glm::vec2(128,5),glm::vec2(129,9), glm::vec2(130,9), glm::vec2(131,5), glm::vec2(168,9),glm::vec2(169,9),glm::vec2(171,9) };
	float scroll = 0;


};


#endif // _SCENE_INCLUDE

