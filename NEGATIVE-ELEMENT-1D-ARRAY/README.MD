# 2D Array Input and Display in C

## 📌 Description

This C language project demonstrates how to create a two-dimensional array, accept input from the user, and display its elements using nested loops.

The program takes the number of rows and columns, stores the entered values in a 2D array, and then prints all elements row by row.

## ✨ Features

* Accepts the number of rows and columns from the user.
* Creates a 2D array using Variable Length Arrays (VLA).
* Takes input for each array element.
* Displays all array elements using nested loops.
* Demonstrates basic 2D array traversal.

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC or any C compiler supporting C99

## 📂 Project Structure

```text
NAGATIVE-ELEMENT-1D-ARRAY/
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

## 💻 Example Output

```text
enter the row: 2
enter the col: 3

arr[0][0]= 10
arr[0][1]= 20
arr[0][2]= 30
arr[1][0]= 40
arr[1][1]= 50
arr[1][2]= 60

enter row number: 1
102030405060
```

> **Note:** The current program prints all array elements without spaces or line breaks between rows. The variable `u` is accepted as input but is not currently used in the display logic.

## 🔍 How It Works

1. The user enters the number of rows and columns.
2. A 2D array is created using those dimensions.
3. Nested loops are used to input each element.
4. The program asks for a row number.
5. Nested loops traverse and print all elements of the array.

### Core Logic

```c
for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
        printf("%d", arr[i][j]);
    }
}
```

## 🔮 Future Improvements

* Use the entered row number to display only the selected row.
* Add spaces between printed elements.
* Display the array in proper matrix format.
* Add validation for rows and columns.
* Handle invalid input more safely.

## 👨‍💻 Author

**Vishal Soni**