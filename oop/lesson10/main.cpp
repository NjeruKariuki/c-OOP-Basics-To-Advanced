#include <iostream>

//create an enemy class 
//2 types of enemies: ninja & monster: derived from enemy 
//use polymorphism
//


class Enemy
{
	public:
		virtual void attack(){
			std::cout<<"Enemy attack!!"<<std::endl;
		}

		void setAttackPower(int x){
			attackPower = x;
		}

		void enemyHit(){
			if(enemyLife<=0){
				std::cout<<"You Win!!!"<<std::endl;
			}else{
				enemyLife--;
				std::cout<<"Enemy under attack!!  \n"<<enemyLife<< " lives Remaining!"<<std::endl;
			}
		}

	protected:
		int attackPower;
	private:
		int enemyLife = 3;
};

class Ninja: public Enemy
{
	public:
		void attack(){
			std::cout<<"Ninja attack!!  -"<<attackPower<<std::endl;
		}

};

class Monster: public Enemy
{
	public:
		void attack(){
			std::cout<<"Monster attack!!  -"<<attackPower<<std::endl;
		}
};

class Player
{
	public:
		void attack(){
			std::cout<<"Player attack!!! "<<std::endl;
		}

		void playerHit(){
			if(playerLife<=1){
				std::cout<<"GAMEOVER!!! XX Player died!!!"<<std::endl;
			}
			else{
				playerLife--;
				std::cout<<" Player under attack!!  \n"<<playerLife<< "lives Remaining!"<<std::endl;
			}
		}

	private:
		int playerLife = 3;
};

int main(){
	Monster m;
	Ninja n;
	Player x;
	Enemy *enemy1 = &m;
	Enemy *enemy2 = &n;

	enemy1->setAttackPower(99);
	enemy2->setAttackPower(34);
	enemy1->attack();
	x.playerHit();
	x.attack();
	enemy1->enemyHit();
	enemy2->attack();
	x.playerHit();
	enemy2->attack();
	x.playerHit();
}
