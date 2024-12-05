package exercism;

import java.util.HashMap;
import java.util.Map;

class SqueakyClean {
    static String clean(String identifier) {

        identifier = identifier.replace(" ", "_");

        StringBuilder result = new StringBuilder();
        boolean capitalizeNext = false;
        for (char c : identifier.toCharArray()) {
            if (c == '-') {
                capitalizeNext = true;
            } else {
                if (capitalizeNext) {
                    result.append(Character.toUpperCase(c));
                    capitalizeNext = false;
                } else {
                    result.append(c);
                }
            }
        }
        identifier = result.toString();

        Map<Character, Character> leetMap = new HashMap<>();
        leetMap.put('4', 'a');
        leetMap.put('3', 'e');
        leetMap.put('1', 'l');
        leetMap.put('0', 'o');
        leetMap.put('7', 't');
        leetMap.put('5', 's');
        leetMap.put('6', 'g');
        leetMap.put('8', 'b');

        result = new StringBuilder();
        for (char c : identifier.toCharArray()) {
            result.append(leetMap.getOrDefault(c, c));
        }
        identifier = result.toString();

        identifier = identifier.replaceAll("[^a-zA-Z_]", "");

        return identifier;
    }
}