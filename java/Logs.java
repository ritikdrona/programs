import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class Logs {
    static int solve(int N, char[][] logs, String start_date, String start_time,
            String finish_date, String finish_time) {

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy:kk:mm:ss");

        LocalDateTime startDateTime = LocalDateTime.parse(start_date + ":" + start_time, formatter);
        LocalDateTime finishDateTime = LocalDateTime.parse(finish_date + ":" + finish_time, formatter);

        int count = 0;
        for (char[] l : logs) {
            String line = String.valueOf(l);
            String[] parts = line.split("__");
            String dateTimeString = parts[2].substring(1, parts[2].length() - 1);
            LocalDateTime logDateTime = LocalDateTime.parse(dateTimeString, formatter);

            if (logDateTime.isAfter(startDateTime) && logDateTime.isBefore(finishDateTime)) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        String[] logs = {
            "127.0.0.1__HOME__[01/05/2005:23:48:33]__\"GET_/befdsvsd/csd.gif_HTTP/2.0\"__201__46649"
        };
        int N = logs.length;
        char[][] logsInput = new char[N][];
        for (int i = 0; i < N; i++) {
            logsInput[i] = logs[i].toCharArray();
        }
        int c = solve(N, logsInput, "28/08/2001", "04:28:47",
                "03/09/2008", "20:29:00");
        System.out.println(c);
    }
}
