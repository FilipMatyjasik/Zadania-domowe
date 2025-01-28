#include <iostream>   // Standardowa biblioteka do operacji wejścia/wyjścia (np. cout, cin)
#include <conio.h>    // Biblioteka do obsługi wejścia z klawiatury, pozwala na wykrywanie naciśniętych klawiszy (np. _kbhit, _getch)
#include <windows.h>  // Biblioteka do pracy z funkcjami systemu Windows, w tym np. SetConsoleCursorPosition, Sleep
#include <cstdlib>    // Biblioteka do generowania liczb losowych, np. rand
#include <ctime>      // Biblioteka do pracy z czasem, używana do inicjalizacji generatora liczb losowych (time(0))

using namespace std;

// Stałe określające wymiary planszy
const int WIDTH = 40;     // Szerokość planszy
const int HEIGHT = 20;    // Wysokość planszy
int score = 0;            // Zmienna przechowująca wynik gracza

// Struktura reprezentująca punkt na planszy (pozycja segmentu węża lub jedzenia)
struct Point {
    int x, y;
};

// Dynamiczna tablica przechowująca segmenty węża
Point* snake;             // Zmienna dynamicznie przydzielająca pamięć dla węża
int snakeLength = 3;      // Początkowa długość węża (głowa i 2 segmenty ogona)
Point food;              // Pozycja jedzenia
int direction = 72;       // Kierunek początkowy węża (72 oznacza strzałkę w górę)
bool gameStarted = false; // Flaga kontrolująca, czy gra została rozpoczęta

// Funkcja ustawiająca kursor w określonym miejscu na ekranie
void SetCursorPosition(int x, int y) {
    COORD coord;
    coord.X = x;   // Pozycja X
    coord.Y = y;   // Pozycja Y
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // Ustawienie kursora
}

// Funkcja do rysowania planszy i węża na ekranie
void Draw() {
    SetCursorPosition(0, 0); // Ustawienie kursora na początek ekranu

    // Rysowanie górnej krawędzi planszy
    for (int i = 0; i < WIDTH; i++)
        cout << "*";  // Rysowanie górnej granicy
    cout << endl;

    // Rysowanie planszy
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == 0 || x == WIDTH - 1)
                cout << "*"; // Rysowanie bocznych granic
            else if (x == food.x && y == food.y)
                cout << "+"; // Rysowanie jedzenia
            else {
                bool snakePart = false; // Flaga sprawdzająca, czy dane pole to segment węża
                for (int i = 0; i < snakeLength; i++) {
                    if (snake[i].x == x && snake[i].y == y) {
                        snakePart = true; // Jeżeli segment węża znajduje się na danym polu
                        break;
                    }
                }
                if (snakePart) {
                    if (y == snake[0].y && x == snake[0].x)
                        cout << "@"; // Głowa węża
                    else
                        cout << "#"; // Ciało węża
                }
                else {
                    cout << " "; // Puste pole, jeżeli nie jest to ani granica, ani segment węża
                }
            }
        }
        cout << endl;
    }

    // Rysowanie dolnej krawędzi planszy
    for (int i = 0; i < WIDTH; i++)
        cout << "*";
    cout << endl;
}

// Funkcja do obsługi wejścia z klawiatury (czytanie klawiszy)
void Input() {
    if (_kbhit()) {  // Sprawdza, czy klawisz został naciśnięty
        int current = _getch(); // Pobiera kod naciśniętego klawisza
        if (current == 0 || current == 224) {  // Sekwencja dla klawiszy strzałek
            current = _getch();  // Odbiera następny znak, który określa strzałkę
            if (current == 72 && direction != 80) direction = 72; // Strzałka w górę (72)
            if (current == 80 && direction != 72) direction = 80; // Strzałka w dół (80)
            if (current == 75 && direction != 77) direction = 75; // Strzałka w lewo (75)
            if (current == 77 && direction != 75) direction = 77; // Strzałka w prawo (77)
            if (!gameStarted && current == 72) {  // Jeżeli gra jeszcze się nie zaczęła, to strzałka w górę startuje grę
                gameStarted = true;
            }
        }
    }
}

// Funkcja do logiki gry (poruszanie wężem, kolizje, jedzenie)
void Logic() {
    if (!gameStarted) return; // Jeśli gra jeszcze się nie zaczęła, nie ruszamy wężem

    // Przesunięcie węża
    Point prevSegment = snake[0]; // Zmienna przechowująca poprzedni segment
    Point prev2Segment;
    Point tail = snake[snakeLength - 1]; // Ostatni segment węża (ogon)

    // Przesuwamy segmenty węża w przód (od ogona do głowy)
    for (int i = snakeLength - 1; i > 0; i--) {
        snake[i] = snake[i - 1]; // Każdy segment węża kopiuje pozycję segmentu przed nim
    }

    // Poruszanie głową węża w zależności od kierunku
    if (direction == 72) { // Strzałka w górę
        snake[0].y--;
    }
    if (direction == 80) { // Strzałka w dół
        snake[0].y++;
    }
    if (direction == 75) { // Strzałka w lewo
        snake[0].x--;
    }
    if (direction == 77) { // Strzałka w prawo
        snake[0].x++;
    }

    // Sprawdzanie kolizji z planszą
    if (snake[0].x < 1 || snake[0].x >= WIDTH - 1 || snake[0].y < 0 || snake[0].y >= HEIGHT) {
        cout << "Game Over! Final score: " << score << endl;
        cout << "Press any key to exit...";
        _getch(); // Oczekuj na naciśnięcie dowolnego klawisza przed zakończeniem gry
        delete[] snake; // Zwolnienie pamięci
    }

    // Sprawdzanie kolizji z ciałem węża
    for (int i = 1; i < snakeLength; i++) {
        if (snake[i].x == snake[0].x && snake[i].y == snake[0].y) {
            cout << "Game Over! Final score: " << score << endl;
            cout << "Press any key to exit...";
            _getch(); // Oczekuj na naciśnięcie dowolnego klawisza przed zakończeniem gry
            delete[] snake; // Zwolnienie pamięci
        }
    }

    // Jedzenie - jeśli głowa węża dotknie jedzenia
    if (snake[0].x == food.x && snake[0].y == food.y) {
        score++;  // Zwiększamy wynik
        snakeLength++;  // Zwiększamy długość węża

        // Zwiększamy rozmiar dynamicznej tablicy
        Point* newSnake = new Point[snakeLength];
        for (int i = 0; i < snakeLength - 1; i++) {
            newSnake[i] = snake[i];  // Przenosimy istniejące segmenty do nowej tablicy
        }
        delete[] snake;  // Zwolnienie starej tablicy
        snake = newSnake;  // Przypisanie nowej tablicy

        // Losowanie nowego jedzenia
        bool validFood = false;
        while (!validFood) {
            validFood = true;
            food.x = rand() % (WIDTH - 2) + 1; // Losowanie x
            food.y = rand() % HEIGHT; // Losowanie y

            // Zapewnienie, że jedzenie nie pojawi się na wężu
            for (int i = 0; i < snakeLength; i++) {
                if (snake[i].x == food.x && snake[i].y == food.y) {
                    validFood = false; // Jeśli jedzenie pojawi się na wężu, ponownie je losujemy
                    break;
                }
            }
        }
    }
}

int main() {
    srand(time(0)); // Inicjalizacja generatora liczb losowych

    // Dynamiczna alokacja pamięci dla węża
    snake = new Point[WIDTH * HEIGHT];  // Maksymalna liczba segmentów węża to liczba komórek planszy

    // Inicjalizacja pozycji węża (na środku planszy)
    snake[0] = { WIDTH / 2, HEIGHT / 2 };
    snake[1] = { WIDTH / 2, HEIGHT / 2 + 1 };
    snake[2] = { WIDTH / 2, HEIGHT / 2 + 2 };

    // Losowanie pierwszego jedzenia
    food.x = rand() % (WIDTH - 2) + 1;
    food.y = rand() % HEIGHT;

    // Pętla główna gry
    while (true) {
        Draw();   // Rysowanie planszy
        Input();  // Odczytanie wejścia (klawisze)
        Logic();  // Logika gry (poruszanie wężem, sprawdzanie kolizji)
        Sleep(100);  // Opóźnienie (szybkość gry)
    }

    // Zwolnienie pamięci po zakończeniu gry
    delete[] snake;

    return 0;
}
