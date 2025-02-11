// Parse the first number
Console.Write("Enter the 1st number: ");
var line = Console.ReadLine();
if (String.IsNullOrEmpty(line))
{
    Console.WriteLine("Line is empty. Please try again.");
    Environment.Exit(1);
}

int firstNumber;
var success = int.TryParse(line, out firstNumber);
if (!success)
{
    Console.WriteLine("Invalid number. Please try again.");
    Environment.Exit(1);
}

// Parse the second number
Console.Write("Enter the 2nd number: ");
line = Console.ReadLine();
if (String.IsNullOrEmpty(line))
{
    Console.WriteLine("Line is empty. Please try again.");
    Environment.Exit(1);
}

int secondNumber;
success = int.TryParse(line, out secondNumber);
if (!success)
{
    Console.WriteLine("Invalid number. Please try again.");
    Environment.Exit(1);
}

// Output the sum of the two numbers
Console.WriteLine("Sum: " + (firstNumber + secondNumber));
