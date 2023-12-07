#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    while (1) { /*Нескінченний цикл для повторного запуску коду*/

    int t; // Змінна для вибору завдання

    printf ("Choose task:\n 1.Aditional_1 task_8\n 2.Aditional_2 task_3\n"); // Виведення тексту для вибору завдання
    scanf ("%d", &t); // Зчитування вибраного завдання з клавіатури

if (t==1) { /*Завдання 1*/
    
    char inputString[250]; // Змінна рядка (речення)
    char oldWord[25]; // Змінна слова, яке потрібно замінити
    char newWord[25]; // Змінна нового слова, на яке потрібно замінити

    getchar(); // Очищення з пам'яті попередньо введених символів з клавіатури

    printf("Enter string(sentence): "); // Виведення тексту для введення рядка(речення)
    fgets(inputString, sizeof(inputString), stdin); // Зчитування введеного рядка(речення)
    inputString[strcspn(inputString, "\n")] = '\0';  // Створюємо рядковий масив

    printf("Enter the word you want to replace: "); // Виведення тексту для введення слова, яке потрібно замінити
    scanf("%s", oldWord); // Зчитування введеного слова

    printf("Enter new word: "); // Виведення тексту для введення нового слова
    scanf("%s", newWord); // Зчитування введеного слова

    char *pos = strstr(inputString, oldWord); // Створюємо вказівник, який знаходить і зберігає в собі старе слово

    while (pos != NULL) { //*Цикл для заміни слова*//
        memmove(pos + strlen(newWord), pos + strlen(oldWord), strlen(pos + strlen(oldWord)) + 1); // Замінюємо старе слово на нове
        strncpy(pos, newWord, strlen(newWord)); // Копіюємо нове слово в рядок 

        pos = strstr(pos + strlen(newWord), oldWord); // Перевіряємо рядок наявність ще старих слів
    }

    printf("Edited string(sentence): %s\n", inputString); // Виведення відредагованого рядка(речення)
    }

if (t==2) { /*Завдання 2*/
    
    int n = 1; // Змінна n(1)
    double ln2 = log(2); // Змінна ln(2)
    double EPS = pow(10, -6); // Змінна точності EPS
    double sum; // Змінна суми
    double sum1 = 1.0; // Змінна суми(1)
    

    while (fabs(sum1) > EPS) { /*Цикл для обчислення суми, поки сума не вийде за точність EPS*/
        sum += sum1; // Додавання всіх членів суми
        n++; // Перебір змінної n від 1 до нескінченності
        sum1 = pow(-1, n - 1) / (double)n; // Обчислення всіх членів суми 
    }

    printf("Sum = %lf\n", sum); // Виведення суми
    printf("ln(2) = %lf\n", ln2); // Виведення ln(2)
    }
    
}
}