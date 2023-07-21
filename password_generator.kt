import kotlin.random.Random

fun main() {
    val (a, b, c, n) = readLine()?.split(" ")?.map { it.toInt() } ?: return

    val upperCaseLetters = ('A'..'Z').toList()
    val lowerCaseLetters = ('a'..'z').toList()
    val digits = ('0'..'9').toList()

    val allChars = upperCaseLetters + lowerCaseLetters + digits
    val totalCount = a + b + c
    val remainingCount = n - totalCount

    val password = mutableListOf<Char>()

    // Add uppercase letters
    password.addAll(generateChars(upperCaseLetters, a))

    // Add lowercase letters
    password.addAll(generateChars(lowerCaseLetters, b))

    // Add digits
    password.addAll(generateChars(digits, c))

    // Add remaining characters randomly
    password.addAll(generateChars(allChars, remainingCount))

    // Shuffle the password list
    password.shuffle(Random)

    // Check for consecutive repeated characters and reshuffle if found
    while (hasConsecutiveRepetitions(password)) {
        password.shuffle(Random)
    }

    println(password.joinToString(""))
}

// Helper function to generate characters randomly from the given list
fun generateChars(charList: List<Char>, count: Int): List<Char> {
    return List(count) { charList.random(Random) }
}

// Helper function to check for consecutive repeated characters
fun hasConsecutiveRepetitions(password: List<Char>): Boolean {
    for (i in 1 until password.size) {
        if (password[i] == password[i - 1]) {
            return true
        }
    }
    return false
}
