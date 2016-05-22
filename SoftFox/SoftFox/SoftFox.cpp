
	mushroomSprite = new Texture("..\\Sprites\\mushroom.png");
	winScreen = new Texture("..\\Sprites\\winscreen.png");
	
	//Dean Harland Coding Task Two Start
	//Set mushroom start posistion to the tile using level
	mushroomX = tileSize * level->getMushroomX() + tileSize / 2;
	mushroomY = tileSize * level->getMushroomY() + tileSize / 2;
	//Dean Harland Coding Task Two End

	
			}
		}
		//Drawing mushroom sprite
		mushroomSprite->render(renderer, mushroomX, mushroomY + spriteAdjustmentMushroomSize, SPRITE_SIZE, SPRITE_SIZE);

		

		//Dean Harland Coding Task Two Start
		endGameMushroom();	
		//Dean Harland Coding Task Two Start



//Dean Harland Coding Task Two Start
void SoftFox::endGameMushroom()
{
	SDL_Rect mushroomBox = { mushroomX - SPRITE_SIZE / 2, mushroomY - SPRITE_SIZE / 2 + spriteAdjustmentMushroomSize,SPRITE_SIZE, SPRITE_SIZE };
	SDL_Rect playerBox = { playerX - SPRITE_SIZE / 2, playerY - SPRITE_SIZE / 2, SPRITE_SIZE, SPRITE_SIZE };
	if (physics->isCollision(mushroomBox, playerBox))
	{

		//render win screen
		winScreen->render(renderer, winScreenXAdjustment, winScreenYAdjustment, WINDOW_WIDTH, WINDOW_HEIGHT);
	}
}
//Dean Harland Coding Task Two End