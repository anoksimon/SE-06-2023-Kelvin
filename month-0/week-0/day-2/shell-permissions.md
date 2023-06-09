## Bash Shell Permissions

### What are Shell Permissions in Bash?

In Bash, shell permissions are a way to control access to files and directories. Each file and directory in a Linux/Unix system has three sets of permissions: read (r), write (w), and execute (x). These permissions determine who can read, write, or execute a file or directory.

### Using `chmod` to Modify Permissions

The `chmod` command is used in Bash to modify the permissions of files and directories. It allows you to grant or revoke permissions for different users or groups. Here's the basic syntax of the `chmod` command:

```
chmod options permissions file
```

### Numeric Representation of Permissions

Permissions in Bash can be represented using numbers. Each permission (read, write, execute) is assigned a value:

- Read (r): 4
- Write (w): 2
- Execute (x): 1

You can calculate the permission values by adding the values of the respective permissions. For example:

- 7 (rwx) = 4 (r) + 2 (w) + 1 (x)
- 6 (rw-) = 4 (r) + 2 (w) + 0 (x)
- 5 (r-x) = 4 (r) + 0 (w) + 1 (x)

### Common Permission Values

Here are some common permission values:

- `777` (rwxrwxrwx): Gives read, write, and execute permissions to the owner, group, and others.
- `755` (rwxr-xr-x): Gives read, write, and execute permissions to the owner, and read and execute permissions to the group and others.
- `644` (rw-r--r--): Gives read and write permissions to the owner, and read-only permissions to the group and others.

### Recorded Session: Shell Permissions

To learn more about shell permissions and how to use `chmod` effectively, watch the recorded session of today's class. Here's the link to the video:

- [Class: Shell Permissions](https://youtu.be/ySUW70bPBuA)

### Shell Permissions Documentation

For further reference and in-depth understanding of shell permissions, you can refer to the official documentation:

- [Shell Permissions Documentation](https://linuxcommand.org/lc3_lts0090.php)

Remember to review the class video and documentation to grasp the concepts of shell permissions effectively.

---

