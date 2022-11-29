#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFPhysics.h>
#include <vector>
using namespace std;
using namespace sf;
using namespace sfp;

const float KB_SPEED = 0.2;

void LoadTex(Texture& tex, string filename) {
	if (!tex.loadFromFile(filename)) {
		cout << "Could not load " << filename << endl;
	}
}

void MoveCrossbow(PhysicsSprite& crossbow, int elapsedMS) {
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		Vector2f newPos(crossbow.getCenter());
		newPos.x = newPos.x + (KB_SPEED * elapsedMS);
		crossbow.setCenter(newPos);
	}
	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		Vector2f newPos(crossbow.getCenter());
		newPos.x = newPos.x - (KB_SPEED * elapsedMS);
		crossbow.setCenter(newPos);
	}
}

int main()
{


	// Create our window and world with gravity 0,1
	RenderWindow window(VideoMode(800, 600), "Bounce");
	World world(Vector2f(0, 0));

	PhysicsSprite& crossBow = *new PhysicsSprite();
	Texture cbowTex;
	LoadTex(cbowTex, "images/paddle.png");
	crossBow.setTexture(cbowTex);
	crossBow.setSize(Vector2f(100, 15));
	Vector2f sz = crossBow.getSize();
	crossBow.setCenter(Vector2f(400,
		600 - (sz.y / 2)));
	world.AddPhysicsBody(crossBow);
	
	
	
	

	// Create the ball
	PhysicsCircle ball;
	ball.setCenter(Vector2f(400, 300));
	ball.setRadius(8);
	world.AddPhysicsBody(ball);
	ball.applyImpulse(Vector2f(0, -.5));
	crossBow.setStatic(true);

	// Ceiling
	PhysicsRectangle ceiling;
	ceiling.setSize(Vector2f(700, 20));
	ceiling.setCenter(Vector2f(400, 30));
	ceiling.setStatic(true);
	world.AddPhysicsBody(ceiling);

	// Left Wall
	PhysicsRectangle leftWall;
	leftWall.setSize(Vector2f(20, 560));
	leftWall.setCenter(Vector2f(50, 300));
	
	world.AddPhysicsBody(leftWall);

	// Right Wall
	PhysicsRectangle rightWall;
	rightWall.setSize(Vector2f(20, 560));
	rightWall.setCenter(Vector2f(750, 300));
	rightWall.setStatic(true);
	world.AddPhysicsBody(rightWall);

	PhysicsRectangle center;
	center.setSize(Vector2f(25, 25));
	center.setCenter(Vector2f(675, 100));
	center.setStatic(true);
	world.AddPhysicsBody(center);

	PhysicsRectangle rec1;
	rec1.setSize(Vector2f(25, 25));
	rec1.setCenter(Vector2f(625, 100));
	rec1.setStatic(true);
	world.AddPhysicsBody(rec1);

	PhysicsRectangle rec2;
	rec2.setSize(Vector2f(25, 25));
	rec2.setCenter(Vector2f(575, 100));
	rec2.setStatic(true);
	world.AddPhysicsBody(rec2);

	PhysicsRectangle rec3;
	rec3.setSize(Vector2f(25, 25));
	rec3.setCenter(Vector2f(525, 100));
	rec3.setStatic(true);
	world.AddPhysicsBody(rec3);

	PhysicsRectangle rec4;
	rec4.setSize(Vector2f(25, 25));
	rec4.setCenter(Vector2f(475, 100));
	rec4.setStatic(true);
	world.AddPhysicsBody(rec4);

	PhysicsRectangle rec5;
	rec5.setSize(Vector2f(25, 25));
	rec5.setCenter(Vector2f(425, 100));
	rec5.setStatic(true);
	world.AddPhysicsBody(rec5);

	PhysicsRectangle rec6;
	rec6.setSize(Vector2f(25, 25));
	rec6.setCenter(Vector2f(375, 100));
	rec6.setStatic(true);
	world.AddPhysicsBody(rec6);

	PhysicsRectangle rec7;
	rec7.setSize(Vector2f(25, 25));
	rec7.setCenter(Vector2f(325, 100));
	rec7.setStatic(true);
	world.AddPhysicsBody(rec7);

	PhysicsRectangle rec8;
	rec8.setSize(Vector2f(25, 25));
	rec8.setCenter(Vector2f(275, 100));
	rec8.setStatic(true);
	world.AddPhysicsBody(rec8);

	PhysicsRectangle rec9;
	rec9.setSize(Vector2f(25, 25));
	rec9.setCenter(Vector2f(225, 100));
	rec9.setStatic(true);
	world.AddPhysicsBody(rec9);

	PhysicsRectangle rec10;
	rec10.setSize(Vector2f(25, 25));
	rec10.setCenter(Vector2f(175, 100));
	rec10.setStatic(true);
	world.AddPhysicsBody(rec10);

	PhysicsRectangle rec11;
	rec11.setSize(Vector2f(25, 25));
	rec11.setCenter(Vector2f(125, 100));
	rec11.setStatic(true);
	world.AddPhysicsBody(rec11);

	PhysicsRectangle rec12;
	rec12.setSize(Vector2f(25, 25));
	rec12.setCenter(Vector2f(675, 150));
	rec12.setStatic(true);
	world.AddPhysicsBody(rec12);

	PhysicsRectangle rec13;
	rec13.setSize(Vector2f(25, 25));
	rec13.setCenter(Vector2f(625, 150));
	rec13.setStatic(true);
	world.AddPhysicsBody(rec13);

	PhysicsRectangle rec14;
	rec14.setSize(Vector2f(25, 25));
	rec14.setCenter(Vector2f(575, 150));
	rec14.setStatic(true);
	world.AddPhysicsBody(rec14);

	PhysicsRectangle rec15;
	rec15.setSize(Vector2f(25, 25));
	rec15.setCenter(Vector2f(525, 150));
	rec15.setStatic(true);
	world.AddPhysicsBody(rec15);

	PhysicsRectangle rec16;
	rec16.setSize(Vector2f(25, 25));
	rec16.setCenter(Vector2f(475, 150));
	rec16.setStatic(true);
	world.AddPhysicsBody(rec16);

	PhysicsRectangle rec17;
	rec17.setSize(Vector2f(25, 25));
	rec17.setCenter(Vector2f(425, 150));
	rec17.setStatic(true);
	world.AddPhysicsBody(rec17);

	PhysicsRectangle rec18;
	rec18.setSize(Vector2f(25, 25));
	rec18.setCenter(Vector2f(375, 150));
	rec18.setStatic(true);
	world.AddPhysicsBody(rec18);

	PhysicsRectangle rec19;
	rec19.setSize(Vector2f(25, 25));
	rec19.setCenter(Vector2f(325, 150));
	rec19.setStatic(true);
	world.AddPhysicsBody(rec19);

	PhysicsRectangle rec20;
	rec20.setSize(Vector2f(25, 25));
	rec20.setCenter(Vector2f(275, 150));
	rec20.setStatic(true);
	world.AddPhysicsBody(rec20);

	PhysicsRectangle rec21;
	rec21.setSize(Vector2f(25, 25));
	rec21.setCenter(Vector2f(225, 150));
	rec21.setStatic(true);
	world.AddPhysicsBody(rec21);

	PhysicsRectangle rec22;
	rec22.setSize(Vector2f(25, 25));
	rec22.setCenter(Vector2f(175, 150));
	rec22.setStatic(true);
	world.AddPhysicsBody(rec22);

	PhysicsRectangle rec23;
	rec23.setSize(Vector2f(25, 25));
	rec23.setCenter(Vector2f(125, 150));
	rec23.setStatic(true);
	world.AddPhysicsBody(rec23);

	Clock clock;
	Time lastTime(clock.getElapsedTime());
	Time currentTime(lastTime);
	float duckFloatTime(0);
	duckFloatTime = 1000;

	while (true) {
		currentTime = clock.getElapsedTime();
		Time deltaTime = currentTime - lastTime;
		long deltaMS = deltaTime.asMilliseconds();
		if (deltaMS > 9) {
			lastTime = currentTime;
			world.UpdatePhysics(deltaMS);
			MoveCrossbow(crossBow, deltaMS);
			
				
				
				
				
				
			}

		window.clear(Color(0, 0, 0));
		window.draw(ball);
		window.draw(ceiling);
		window.draw(leftWall);
		window.draw(rightWall);
		window.draw(center);
		window.draw(crossBow);
		window.draw(rec1);
		window.draw(rec2);
		window.draw(rec3);
		window.draw(rec4);
		window.draw(rec5);
		window.draw(rec6);
		window.draw(rec7);
		window.draw(rec8);
		window.draw(rec9);
		window.draw(rec10);
		window.draw(rec11);
		window.draw(rec12);
		window.draw(rec13);
		window.draw(rec14);
		window.draw(rec15);
		window.draw(rec16);
		window.draw(rec17);
		window.draw(rec18);
		window.draw(rec19);
		window.draw(rec20);
		window.draw(rec21);
		window.draw(rec22);
		window.draw(rec23);
		window.display();
	}
}

