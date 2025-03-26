import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;
import java.io.IOException;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        // BufferedReader를 이용해 빠른 입력을 받습니다.
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        // 첫 줄에서 입력받을 숫자의 개수를 읽습니다.
        int N = Integer.parseInt(br.readLine());
        int[] arr = new int[N];
        
        // N개의 정수를 읽어 배열에 저장합니다.
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        // 배열을 오름차순으로 정렬합니다.
        Arrays.sort(arr);
        
        // StringBuilder를 이용해 결과 문자열을 구성합니다.
        StringBuilder sb = new StringBuilder();
        for (int num : arr) {
            sb.append(num).append("\n");
        }
        
        // BufferedWriter를 이용해 출력합니다.
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(sb.toString());
        bw.flush();
        
        // 스트림을 닫습니다.
        bw.close();
        br.close();
    }
}
