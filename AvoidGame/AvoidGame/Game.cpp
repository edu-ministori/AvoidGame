#include "Game.h"

Game::Game()
{
	// ������ �ʱ�ȭ �� ����
	this->InitWindowPointer();
	this->InitWindow();
}

Game::~Game()
{
	this->DeleteWindow();
}

void Game::InitWindowPointer()
{
	// ������ ���� �ʱ�ȭ
	this->Window = nullptr;
}

void Game::InitWindow()
{
	// ������ ���� ����
	this->Window = new RenderWindow(VideoMode(1280, 720), "Avoid Game", Style::Titlebar | Style::Close);
}

void Game::DeleteWindow()
{
	// ������ �޸𸮿��� ����
	delete this->Window;
}

const bool Game::Running() const
{
	return this->Window->isOpen();
}

void Game::EventHandler()
{
	// �̺�Ʈ �߻� ����
	while (this->Window->pollEvent(Event)) {

		// �̺�Ʈ ���� �Ǵ�
		switch (Event.type) {

		case Event::Closed:
			// ����
			this->Window->close();
			break;
		case Event::KeyPressed:
			if (Event.key.code == Keyboard::Escape) this->Window->close();
			break;
		}

	}
}

void Game::Render()
{
	// Clear
	this->Window->clear(Color(50, 50, 50, 255));

	// Display
	this->Window->display();
}