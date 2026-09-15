# 2D Array Row and Column Sum in C

## 📌 Description

This C language project demonstrates how to create a two-dimensional array, accept elements from the user, and calculate the sum of a selected row and column.

The program uses nested loops to traverse the array and allows the user to choose which row and column to display and sum.

## ✨ Features

* Accepts the number of rows and columns from the user.
* Creates a 2D array using a Variable Length Array (VLA).
* Takes input for each array element.
* Displays the elements of a selected row.
* Calculates the sum of the selected row.
* Displays the elements of a selected column.
* Calculates the sum of the selected column.

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC or any C compiler supporting C99

## 📂 Project Structure

```text id="q8s1fz"
SUM-ELEMENTS-ROW-COL-2D-ARRAY/
├── main.c
├── output.png
└── README.md
```

## 🚀 How to Run

### 1. Compile the program

```bash id="6g3g0j"
gcc main.c -o main
```

### 2. Run the program

**Windows:**

```bash id="8a1r5n"
main
```

**Linux / macOS:**

```bash id="p3t9v1"
./main
```

## 💻 Example Output

```text id="r1x5j8"
enter the row: 2
enter the col: 3
Enter array elements:

arr[0][0]= 10
arr[0][1]= 20
arr[0][2]= 30
arr[1][0]= 40
arr[1][1]= 50
arr[1][2]= 60

enter row number: 1
Elements of row 1: 40 50 60
The sum of row 1 = 150

enter col number: 2
Elements of col 2: 30 60
The sum of col 2 = 90
```

## 🔍 How It Works

### 1. Row Sum

The user enters a row number. The program traverses that row, displays its elements, and adds them together.

```c id="d3x6qa"
int rowsum = 0;

printf("Elements of row %d: ", rownum);

for (int j = 0; j < col; j++) {
    printf("%d ", arr[rownum][j]);
    rowsum += arr[rownum][j];
}
```

### 2. Column Sum

The user enters a column number. The program traverses that column, displays its elements, and calculates the sum.

```c id="f7k2mb"
int colsum = 0;

printf("Elements of col %d: ", colnum);

for (int j = 0; j < row; j++) {
    printf("%d ", arr[j][colnum]);
    colsum += arr[j][colnum];
}
```

## 📚 Concepts Covered

* Two-dimensional arrays
* Variable Length Arrays
* Nested `for` loops
* Row-wise traversal
* Column-wise traversal
* Calculating row and column sums
* Array indexing
* User input using `scanf()`
* Output formatting using `printf()`

## 🔮 Future Improvements

* Add validation for row and column numbers.
* Allow the user to calculate sums for all rows and columns.
* Fix the prompt `"enter row number"` before column input to `"enter column number"`.
* Display the array in a formatted matrix.
* Add a menu for different array operations.

## 👨‍💻 Author

**Vishal Soni**