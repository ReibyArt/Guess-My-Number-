// Guess My Number
// Игруха в угадывание чисел до 100

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    //Запускаем генератор случайных чисел

    srand(static_cast<unsigned int>(time(0)));

    // Случайное число от 1 до 100

    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;
    string text;
    cout << "\t Welcome to Guess My Number\n\n";

    // Создаём игровой цикл
      do {
        cout << "Enter a guess number: ";
        cin >> guess;
        ++tries;
        
        if (guess>secretNumber)
        {
            cout << "Too high!\n\n";
        }
        else if (guess<secretNumber)
        {
            cout << "Too low\n\n";
        }
        
        else
        {
            cout << "\nThat's it! You Win my Boy! ))) You got it in " << tries << " guesses!\n";
        }

        

      } while (guess != secretNumber); 
          
                return 0; 

      
    
}

