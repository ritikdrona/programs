import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class JSON {
    static String[] solve(String text, int Q, String[] queries) {
        Map<String, Object> map = new HashMap<>();
        String[] entries = text.split(",");

        String[] result = new String[Q];
        return result;
    }

    public static void main(String[] args) {
        String t = "\"Student\":{\"Name\":\"John\",\"Age\":\"15\"},\"Class\":\"10\"";
        String[] q = {"Student.Name", "Student.Age", "Class"};
        System.out.println(t);
        System.out.println(Arrays.toString(solve(t, 3, q)));
    }
}
