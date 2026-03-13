⚠️ Important Note About File Names

Hey everyone 👋 Just a quick note before you dive into the programs!

All the Java files here are named like 0051_program.java, 0052_program.java, and so on. The reason is simple — GitHub sorts files alphabetically, and by adding numbers at the beginning, everything stays in perfect order from 1 to 700. It just makes the list neat and easy to browse 😄

Now, here’s the catch — Java doesn’t allow class names to start with numbers. So if I tried naming the class 0051_program, the compiler would instantly throw an error. To fix this, I used a small trick: I didn’t make the class public. That allows me to give it a different name inside the file, like program_0051, and everything works perfectly fine.

Here’s what it looks like inside:

class program_0051
{
    public static void main(String args[])
    {
        System.out.println("Hello!");
    }
}



Also, since these classes are not public, they can’t be accessed from outside their files or packages. Normally, in larger Java projects, we organize everything inside packages to manage visibility and structure. But because these are small, standalone learning programs, I’ve skipped the concept of packages here to keep things simple and easy to understand 👨‍💻

Now, since the file name and class name are different, you’ll need to remember two commands while running your code:

To compile, use the file name → javac 0051_program.java

To run, use the class name → java program_0051

And that’s it ✅
Just remember — the file name starts with a number, the class name doesn’t. Keep that in mind, and everything will run smoothly 🚀
