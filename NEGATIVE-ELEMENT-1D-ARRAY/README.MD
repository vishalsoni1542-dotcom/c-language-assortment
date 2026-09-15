# Find Negative Numbers in an Array

## 📌 Description

This C language project demonstrates how to create a one-dimensional array, accept integer values from the user, and identify the negative numbers present in the array.

The program checks each element using a conditional statement and displays the elements that are less than zero.

## ✨ Features

* Accepts the array size from the user.
* Creates an array using a Variable Length Array (VLA).
* Takes input for each array element.
* Checks every element for negative values.
* Displays all negative numbers found in the array.

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC or any C compiler supporting C99

## 📂 Project Structure

```text
NEGATIVE-ELEMENT-1D-ARRAY/
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
enter the size of array's: 5
arr[0]= 10
arr[1]= -5
arr[2]= 20
arr[3]= -8
arr[4]= 15

this is a negative number of array's element: -5-8
```

## 🔍 How It Works

1. The user enters the size of the array.
2. The program accepts integer values for each element.
3. A `for` loop checks every element.
4. If an element is less than zero, it is printed.

## 📚 Concepts Covered

* One-dimensional arrays
* Variable Length Arrays
* `for` loops
* Conditional statements
* Array indexing
* Finding negative numbers
* User input using `scanf()`
* Output using `printf()`

## 🔮 Future Improvements

* Add spaces between negative numbers.
* Display a message when no negative numbers are found.
* Count the total number of negative elements.
* Calculate the sum of negative numbers.
* Add validation for the array size.

## 👨‍💻 Author

**Vishal Soni**