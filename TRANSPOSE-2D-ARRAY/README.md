# 2D Array Column-Wise Display in C

## 📌 Description

This C language project demonstrates how to create a two-dimensional array, accept input from the user, and display its elements **column by column**.

Unlike the usual row-wise traversal, this program uses nested loops to access each column first and then print the elements from top to bottom.

## ✨ Features

* Accepts the number of rows and columns from the user.
* Creates a 2D array using Variable Length Arrays (VLA).
* Takes input for each array element.
* Displays the array column-wise.
* Demonstrates nested `for` loops and array indexing.

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC or any C compiler supporting C99

## 📂 Project Structure

```text
TRANSPOSE-2D-ARRAY/
├── main.c
├── output.png
└── README.md
```

## 🚀 How to Run

### 1. Compile the program

```bash
gcc main.c -o main
```

### 2. Run the program

**Windows:**

```bash
main
```

**Linux / macOS:**

```bash
./main
```

**Note:** The actual output for the given code is:

```text
1040
2050
3060
```

The program prints each column on a separate line, with elements displayed from top to bottom.

## 🔍 How It Works

The program uses two nested loops to traverse the array column-wise:

```c
for(int k = 0; k < col; k++){
    for(int p = 0; p < row; p++){
        printf("%d", arr[p][k]);
    }
    printf("\n");
}
```

* The outer loop (`k`) moves through each column.
* The inner loop (`p`) moves through each row of the current column.
* Each column is printed on a new line.

## 🔮 Future Improvements

* Add spaces between printed elements.
* Display the array in a formatted matrix.
* Add input validation for rows and columns.
* Allow the user to choose between row-wise and column-wise display.

## 👨‍💻 Author

**Vishal Soni**