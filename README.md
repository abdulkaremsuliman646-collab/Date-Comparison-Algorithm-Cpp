# Date Comparison Algorithm in C++ 📅⚖️

A clean, modular C++ program designed to evaluate the chronological order of two calendar dates. It determines whether the first date precedes the second date by applying hierarchical comparisons across years, months, and days.

---

## 🚀 Key Concepts & Architecture
- **Hierarchical Evaluation:** Evaluates precedence logically from the largest unit to the smallest (Year $\rightarrow$ Month $\rightarrow$ Day) to minimize unnecessary conditional checks.
- **Data Encapsulation:** Employs a custom `stDate` structure containing `Day`, `Month`, and `Year`.
- **Clean Code & Modularity:** Isolates input operations from the evaluation logic (`IsDate1BeforeDate2`).

---

## 💻 Sample Execution
```text
Enter Date 1:
Please enter a Day? 15
Enter a Month (1-12): 5
Enter a Year: 2023

Enter Date 2:
Please enter a Day? 10
Enter a Month (1-12): 8
Enter a Year: 2023

Yes, Date1 is Less than Date2
