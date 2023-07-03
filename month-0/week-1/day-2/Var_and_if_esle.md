# Shell Scripting Basics

Welcome to the Shell Scripting Basics repository! In this guide, we'll cover some essential concepts in shell scripting, including variables, user input, and if-else statements.

## Variables in Shell Scripts

### What are Variables?

Variables in shell scripts are placeholders used to store and manipulate data. They provide a way to store values that can be referenced later in the script. Variables can hold various types of data, such as strings, numbers, and even the output of commands.

### Advantages of Using Variables

Using variables in shell scripts offers several advantages:
- They make scripts more readable by using meaningful names for data.
- Variables allow for easier modification and maintenance of scripts.
- They enable code reusability by storing values that can be used in multiple places.

### Writing and Using Variables

To declare a variable in shell scripting, use the following syntax:

```shell
variable_name=value
```

Here's an example:
```shell
name="John"
```

To access the value stored in a variable, prefix the variable name with a `$` symbol. For example, to display the value of the `name` variable, use `$name`.

## User Input in Shell Scripts

### Getting User Input

To get input from the user in a shell script, use the `read` command. The `read` command allows you to prompt the user for input and store the entered value in a variable.

Here's an example:
```shell
read -p "Enter your name: " user_name
```

### Storing and Using User Input

The entered value can be stored in a variable, just like any other value. You can then use this variable in your script as needed. For example, to display a personalized message using the user's name:

```shell
echo "Hello, $user_name! Welcome to our script."
```

## If-Else Statements in Shell Scripts

If-else statements are used to perform conditional execution in shell scripts. They allow you to control the flow of your script based on certain conditions.

If you want to learn more about if-else statements and their usage in shell scripts, we recommend checking out this detailed tutorial: [If-Else in Shell Scripts](https://www.digitalocean.com/community/tutorials/if-else-in-shell-scripts).

## Recorded Live Session

To get a more detailed explanation and examples of using variables, user input, and if-else statements in shell scripts, we encourage you to watch our recorded live session: [Recorded Live Session](https://youtu.be/BDmjeUQ2PE4).

Feel free to explore the provided resources and dive deeper into the world of shell scripting!

---
