//I have successfully cloned and pushed
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <random>
#include <ctime>
using std::cout;
using std::string;
using std::endl;
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
roll();
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{

int number;
std::default_random_engine engi;
std::random_device aj;
std::uniform_int_distribution<int> rand(4,20);
engi.seed(aj());
number=rand(engi);
std::cout<<"This is the random number between 4 to 20 : " <<number<<std::endl;
}
