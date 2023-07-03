### Cloning a Repository Using Personal Access Token

To clone a repository to your local terminal using a personal access token, follow these steps:

1. Generate a personal access token on GitHub by going to your account settings, selecting "Developer settings," and then "Personal access tokens." Generate a new token with the necessary permissions.
2. Copy the generated token to your clipboard.
3. Open your terminal and navigate to the directory where you want to clone the repository.
4. Run the following command, replacing `<personal-access-token>` and `<repository-url>` with your actual personal access token and repository URL, respectively:

```bash
git clone https://<personal-access-token>@github.com/<repository-url>.git
```

5. Press Enter and provide your GitHub username and personal access token when prompted.
6. Git will clone the repository to your local machine.

### Assignment: Cloning and Pushing the Repository

For your assignment, you will clone your forked copy of the repository, make changes, and push the changes back to GitHub. Follow the steps below:

1. Clone your forked repository to your local terminal using the steps mentioned above.
2. Open your terminal and navigate to the cloned repository by running the following commands:

```bash
cd <repository-name>
cd month-0
cd week-1
cd day-1
```

3. Inside the `day-1` directory, create a file named `hello.sh` by running the following command:

```bash
touch hello.sh
```

4. Open the `hello.sh` file in a text editor and write the following line of code:

```bash
echo "Finally, I cloned My Git repo"
```

5. Save and close the file.
6. Back in your terminal, add the changes to the staging area by running the following command:

```bash
git add hello.sh
```

7. Commit the changes with a descriptive message using the following command:

```bash
git commit -m "Add hello.sh file with a message"
```

8. Finally, push the changes to your forked repository on GitHub by running the following command:

```bash
git push origin main
```

### Today's Class: Git Basics

If you missed today's class or want to review the concepts we covered, you can watch the recorded version:

- [Class Recording: More Git](https://youtu.be/xbEGSxkYTKo)

Make sure to watch the recording to reinforce your understanding of Git fundamentals.

Remember to adjust the `<repository-name>` and `<repository-url>` placeholders in the instructions to match the actual repository name and URL for your forked repository.

---


```
