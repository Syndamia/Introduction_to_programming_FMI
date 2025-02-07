
# Многомерни масиви

## Двумерни масиви.

   ```c++
int matrix1[3][4]; // създава се матрица с 3 реда и 4 колони

int arr[3][4] = { { 1, 2, 3, 4 }, { 9, 8, 7, 6 }, { 11, 12, 13, 14 } }; // изреждаме редовете

int matrix3[3][4] = { 1, 2, 3, 4, 9, 8, 7, 6, 11, 12, 13, 14 }; // изреждаме елементите

int matrix4[][4] = { 1, 2, 3, 4, 9, 8, 7, 6, 11, 12, 13, 14 }; // можем да изпуснем най-лявата спецификация на дължина

```

![enter image description here](https://i.ibb.co/XbMWhW8/im.png)
### Достъп до елемент.

 ```c++
 int* row = arr[1]; //ред 1 (масивът на индекс 1)
 std::cout << arr[2][0]<< std::endl //11;
 std::cout << row[2]<< std::endl //7;
```

### Примери с n-мерни масиви.

 ```c++
 int cube[3][3][3]; // създава се тримерен масив  
```
 ### Достъп до елемент.

 ```c++
 cube[2]    // двумерен масив;
 cube[2][1] // едномерен масив;
 cube[2][1][4] // конкретен елемент;

```


Примерна имплементация на:

 - Играта tic-tac-toe с поле NxN, произволна дължина на линията и произволен брой играчи.

<h3>Задачи</h3>


**Задача 1:** Напишете функция, която приема матрица NxN и транспонира матрицата.

**Задача 2:**  Напишете функция, която приема матрица NxN и проверява дали релацията, която представлява матрицата, е релация на еквивалентност.

**Задача 3:**  Напишете функция, която приема матрица NxM и матрица MxK и умножава първата матрица по втората.

**Задача 4:**  Напишете функция, която приема матрица NxN и връща обратната матрица (ако дадената е обратима). Ако матрицата не е обратима, да се отпечата подходящо съобщение.

**Задача 5:**  Напишете функция, която приема матрица NxN+1 и решава системата от линейни уравнения, репрезентирана в матрицата.


*Вход*: 

3 2 5 0

2-3 4 10

2 1 1 4

*Изход: 4, -11.14, -12.85*

Тук се решава системата:

-3x + 2y - 5z = 0

2x - 3y + 4z = 10

2x + y + z=4

Тя има решение: x = 14, y = -78/4 (-11.14), z = -90/7 (-12.85).

Важно! 

Програмата трябва да засича, ако системата няма решение или има безкраен брой решения и да отпечата подходящо съобщение в този случай.


## Проект: Мinesweeper

Да се реализира в **конзолна** играта  **Мinesweeper**.
Целта на играта е да се разкрият всички квадратчета, които не съдържат мини , без да щракнем върху мина преди това. Разположението на мините може да се разбере логически, с помощта на цифрички, стоящи се на местата на квадратчетата след щракане върху тях. Цифрите показват колко квадратчета, в които има мини, има в съседство. Ако се щракне върху квадратче, което няма мини (стои числото 0)  в съседство, то разкрива съседните, ако някое от тези разкрити също няма мини в съседство, то също разкрива съседните квадратчета и тн...

![enter image description here](https://i.ibb.co/F4YY0ST/beginner.png)

[Онлайн версия на играта](http://minesweeperonline.com/#)


**Забележка: От вас не се изисква създаването на графичен интерфейс. Играта трябва да бъде конзолна апликация.**

В конзолата трябва да изпълнявате команди от вида:

> [command] [x coordinate] [y coordinate]

Където [command] е **open**, **mark** или **unmark**, а след него стоят координатите на квадратчето.

 - **open** - отваря квадратчето. Ако там седи мина - край на играта!
 - **mark** - маркира квадратчето като "мина". Ако всички мини са маркирани
   и всички други квардратчета са отворени, играта прилкючва с успех!
 - **unmark** - отмаркира квадрачето като "мина". Ако квадратчето не е било
   маркирано, то се извежда подходящо съобщение за грешка.

При започването на играта, потребителят трябва да може да избере на каква размерност да играе (3 <= N <= 10). След това трябва да избере колко мини да бъдат "скрити".
Броят трябва да е в интервала [1, 3N]. Ако някои от стойностите не са въведат правилно от потребителя, то трябва да се изведе подходящо съобщение и да бъде "приканен" да въведе отново.

Краен срок: 
