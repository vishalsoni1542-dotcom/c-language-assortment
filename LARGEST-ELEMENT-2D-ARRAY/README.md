# Find the Largest Element in a 2D Array

## 📌 Description

This C language project demonstrates how to create a two-dimensional array, accept integer values from the user, and find the **largest element** present in the array.

The program initializes the largest value with the first array element and then compares it with every other element using nested loops.

## ✨ Features

* Accepts the number of rows and columns from the user.
* Creates a 2D array using a Variable Length Array (VLA).
* Takes input for each array element.
* Compares all elements to find the largest value.
* Displays the largest element.

## 🛠️ Technologies Used

* **Language:** C
* **Header File:** `stdio.h`
* **Compiler:** GCC or any C compiler supporting C99

## 📂 Project Structure

```text id="j8zq6s"
LARGEST-ELEMENT-2D-ARRAY/
├── main.c
├── output.png
└── README.md
```

## 🚀 How to Run

### 1. Compile the program

```bash id="m7g3aa"
gcc main.c -o main
```

### 2. Run the program

**Windows:**

```bash id="b3d7qp"
main
```

**Linux / macOS:**

```bash id="p0h9rz"
./main
```

## 💻 Example Output

```text id="2e4x6k"
enter the row: 2
enter the col: 3
enter array's element:

arr[0][0]= 10
arr[0][1]= 25
arr[0][2]= 15
arr[1][0]= 40
arr[1][1]= 5
arr[1][2]= 30

the largest element is: 40
```

## 🔍 How It Works

1. The user enters the number of rows and columns.
2. The program accepts all array elements.
3. The variable `large` is initialized with the first element, `arr[0][0]`.
4. Nested loops traverse the entire array.
5. If an element is greater than `large`, it becomes the new largest value.
6. The largest element is displayed.

## 📚 Concepts Covered

* Two-dimensional arrays
* Variable Length Arrays
* Nested `for` loops
* Conditional statements
* Array indexing
* Finding the maximum value
* User input using `scanf()`
* Output using `printf()`

## 🔮 Future Improvements

* Find the smallest element in the array.
* Display the position of the largest element.
* Handle invalid row and column sizes.
* Add support for floating-point values.
* Calculate the sum and average of array elements.

## 👨‍💻 Author

**Vishal Soni**
