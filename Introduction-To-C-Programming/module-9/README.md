# Module - 9

### Introduction to Array Operations

`Basics of manipulating arrays: insert, remove, reverse and copy`

`Module Overview`

-   Inserting a Value in an Array
    1. Identify insertion index
        - Choose position to add the new element
    2. Shift elements right
        - Make space for the new value
    3. Place new value
        - Insert at the specified value
-   Removing a Value from an Array
    1. Find element index
        - Locate value to remove
    2. Shift elements left
        - Close the gap after removal
    3. Reduce array size
        - Adjust length or handle placeholder
-   Reversing an Array
    1. Swap elements
        - Start with the first and last
        - Move inward
        - Continue until middle
-   Copying elements between Arrays
    1. Specify source array
        - Decide which array to copy from
    2. Select elements
        - Choose single or multiple elements
    3. Paste into destination
        - Insert elements at target point

---

`Inserting a Value in an Array`

-   প্রতিটি নতুন element insert করার জন্য array এর size এক করে বাড়াতে হবে।
-   Exiting last array element থেকে index পর্যন্ত shift করা শুরু করতে হবে। তাহলে কোন element replace হবে না।

```c
for(i = n; i >= index; i--)
    {
    a[i] = a[i - 1];
    }
```

-   Last এ প্রদত্ত index এ প্রদত্ত value assign করতে হবে।

`Removing a Value from an Array`

-   একটি element কে delete করার জন্য আমরা array এর last থেকে প্রদত্ত index পর্যন্ত value গুলোকে replace করতে হবে।

```c
for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
```
- Array দুই প্রকার।
    1. Static : Static array এর size change করা যায় না।
    2. Dynamic
