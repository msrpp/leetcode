import java.nio.CharBuffer;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Set;

public class Solution {
    /*
     * @param chars: The letter array you should sort by Case
     * @return: nothing
     */
    public boolean wordBreak(String s, Set<String> dict) {
        // write your code here
        int length = s.length();
        if (length == 0){
            if (dict.isEmpty())
            return true;
            return false;
        }
        int maxSubLen = dict.stream().max(new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                if (o1.length()>o2.length()){
                    return 1;
                }
                return -1;
            }
        }).get().length();

        boolean []result = new boolean[length+1];
        int beginPos = 0;
        int endPos = 1;
        result[0] = true;

        for (int i=1;i<=length;i++){
            for (int j = beginPos;j<=i;j++){
                if (i-endPos>maxSubLen+1){
                    return false;
                }
                if (result[j] == true ){
                    if (dict.contains(s.substring(j,i))){
                        if (i-beginPos>maxSubLen){
                            beginPos = j;
                        }
                        result[i] = true;
                        endPos = i;
                    }

                }
            }

        }
        return result[length];

    }

//    public static void main(String[] args) {
//        char [] bb = {'a','f','D','a','G'};
//        Solution s = new Solution();
//        Set<String> set= new HashSet<String>();
//        set.add("lint");
//        set.add("code");
//        boolean bbb = s.wordBreak("lintcodelintcodelintcode",set);
//        System.out.println(bbb);
//    }

}
