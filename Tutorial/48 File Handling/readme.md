# 🧩 File Handling in C

## 📘 Introduction

File handling in C allows programs to **store data permanently** on a disk.  
Unlike variables (which lose data when the program ends), files help in **saving, reading, and updating** data even after the program stops.

🧠 Think of files as containers on disk — C lets you open, read, write, and close them using special functions.

---

## 🧩 Header File

To use file handling in C, include the header:

```c
#include <stdio.h>
```

---

## 🧠 Basic Steps in File Handling

1. **Declare a file pointer**
   ```c
   FILE *fp;
   ```

2. **Open a file**
   ```c
   fp = fopen("filename.txt", "mode");
   ```

3. **Perform file operations**
   - Write to file (`fprintf`, `fputs`, `fwrite`)
   - Read from file (`fscanf`, `fgets`, `fread`)

4. **Close the file**
   ```c
   fclose(fp);
   ```

---

## 🧩 File Modes in C

| Mode | Meaning | Description |
|-------|----------|-------------|
| `"r"` | Read | Opens file for reading (must exist) |
| `"w"` | Write | Opens file for writing (creates or overwrites) |
| `"a"` | Append | Opens file for adding data at end |
| `"r+"` | Read + Write | Opens existing file for both read and write |
| `"w+"` | Write + Read | Creates new file for read/write (overwrites) |
| `"a+"` | Append + Read | Opens or creates file for read/write (writes at end) |

---

## ✅ Example 1: Writing to a File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w"); // open file for writing

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, world!\n");
    fprintf(fp, "C File Handling Example.\n");

    fclose(fp); // close the file
    printf("Data written successfully!\n");

    return 0;
}
```

**Output (in file):**
```
Hello, world!
C File Handling Example.
```

🧠 **Explanation:**
- `fprintf()` writes formatted text (like `printf()` but into a file).
- `"w"` mode creates or overwrites the file.

---

## ✅ Example 2: Reading from a File

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "r"); // open for reading

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while (fgets(text, sizeof(text), fp)) {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}
```

**Output:**
```
Hello, world!
C File Handling Example.
```

🧠 `fgets()` reads one line at a time until end of file (EOF).

---

## ✅ Example 3: Append to an Existing File

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a"); // append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("New line added!\n", fp);
    fclose(fp);
    printf("Line appended successfully!\n");

    return 0;
}
```

**Result in file:**
```
Hello, world!
C File Handling Example.
New line added!
```

---

## 🧮 Example 4: Using fscanf() and fprintf()

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL) return 1;

    char name[30];
    int age;
    float marks;

    printf("Enter name, age, marks: ");
    scanf("%s %d %f", name, &age, &marks);

    fprintf(fp, "%s %d %.2f\n", name, age, marks);
    fclose(fp);

    fp = fopen("student.txt", "r");
    fscanf(fp, "%s %d %f", name, &age, &marks);

    printf("\nData from file:\nName: %s\nAge: %d\nMarks: %.2f\n", name, age, marks);

    fclose(fp);
    return 0;
}
```

**Output:**
```
Enter name, age, marks: Rohan 20 89.5

Data from file:
Name: Rohan
Age: 20
Marks: 89.50
```

---

## ⚙️ Example 5: Binary File (fwrite / fread)

Binary files store data **in machine-readable format** (not plain text).

```c
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Alice", 1, 88.5}, s2;

    FILE *fp = fopen("student.dat", "wb"); // binary write
    fwrite(&s1, sizeof(struct Student), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb"); // binary read
    fread(&s2, sizeof(struct Student), 1, fp);
    fclose(fp);

    printf("Name: %s | Roll: %d | Marks: %.1f\n", s2.name, s2.roll, s2.marks);
    return 0;
}
```

**Output:**
```
Name: Alice | Roll: 1 | Marks: 88.5
```

🧠 `fwrite()` and `fread()` are used for **binary file operations** (faster and more compact).

---

## 🧩 Example 6: Check if File Exists

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL)
        printf("File does not exist!\n");
    else {
        printf("File exists!\n");
        fclose(fp);
    }
    return 0;
}
```

---

## 🧾 Common File Handling Functions

| Function | Purpose |
|-----------|----------|
| `fopen()` | Open a file |
| `fclose()` | Close a file |
| `fprintf()` | Write formatted text |
| `fscanf()` | Read formatted text |
| `fputs()` | Write string |
| `fgets()` | Read string |
| `fgetc()` | Read single character |
| `fputc()` | Write single character |
| `fwrite()` | Write binary data |
| `fread()` | Read binary data |
| `feof()` | Detect end-of-file |
| `remove()` | Delete a file |
| `rename()` | Rename a file |

---

## 🧩 Example 7: Deleting and Renaming Files

```c
#include <stdio.h>

int main() {
    rename("oldfile.txt", "newfile.txt");  // rename
    remove("deletefile.txt");              // delete
    printf("File operations done!\n");
    return 0;
}
```

---

## ⚠️ Common Errors

| Mistake | Explanation |
|----------|-------------|
| Using unopened file pointer | Always check `if (fp == NULL)` |
| Forgetting to close file | May cause data loss |
| Wrong file mode | Causes reading/writing errors |
| Reading from empty file | Check with `feof(fp)` |
| Writing to read-only mode | Will fail silently or crash |

---

## 🧠 Summary

| Concept | Description | Example |
|----------|--------------|----------|
| File Pointer | Used to access files | `FILE *fp;` |
| Opening File | `fopen()` with mode | `fopen("file.txt","r");` |
| Writing | `fprintf`, `fputs`, `fwrite` | Text / Binary |
| Reading | `fscanf`, `fgets`, `fread` | Text / Binary |
| Closing | Always close with `fclose()` | Prevents corruption |
| Deleting / Renaming | `remove()`, `rename()` | Manage files easily |

---

## 🚀 Key Takeaways

- File handling allows **permanent storage** of data.  
- Use the correct **mode** (`r`, `w`, `a`, `r+`, etc.).  
- Always **check if file exists** before reading.  
- Always **close the file** using `fclose()`.  
- Use **binary mode** for faster and compact file storage.

---

