// Parse the first number
Console.Write("Enter the 1st number: ");
string? line = Console.ReadLine();
if (line == null) {
    Console.Write("Line is null. Please try again.");
    System.Environment.Exit(1);
}
int firstNumber = Int32.Parse(line);

// Parse the second number
Console.Write("Enter the 2nd number: ");
line = Console.ReadLine();
if (line == null) {
    Console.Write("Line is null. Please try again.");
    System.Environment.Exit(1);
}
int secondNumber = Int32.Parse(line);

// Output the sum of the two numbers
Console.WriteLine("Sum: " + (firstNumber + secondNumber));
