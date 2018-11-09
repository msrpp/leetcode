public class Solution {
    /*
     * @param chars: The letter array you should sort by Case
     * @return: nothing
     */
    public  void sortLetters(char[] chars) {
        // write your code here
        int begin = 0;
        int end = chars.length-1;
        while(begin<end){
            if (Character.isLowerCase(chars[begin])){
                begin++;
                continue;
            }
            if (Character.isUpperCase(chars[end])){
                end --;
                continue;
            }
            char tmp = chars[begin];
            chars[begin] = chars[end];
            chars[end] = tmp;
        }
    }
}
