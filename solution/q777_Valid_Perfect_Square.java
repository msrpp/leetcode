public class Solution {
    /**
     * @param num: a positive integer
     * @return: if num is a perfect square else False
     */
    public static boolean isPerfectSquare(int num) {
        // write your code here
        Integer number = num;
        int numLen = number.toString().length();
        String preStr = numLen%2 == 0?number.toString().substring(0,2):number.toString().substring(0,1);
        Integer pre = null;
        try {
            pre = Integer.parseInt(preStr);
        } catch(Exception e) {
            return false;
        }
        int firstNum = (int)Math.sqrt((double)pre);
        int l = (numLen-1)/2;
        int base =(int) Math.pow(10,l);
        for (int i=firstNum*base; i<(firstNum+1)*base ;i++ ){
            if(i*i == num){
                return true;
            }else if(i*i>num){
                return false;
            }
        }
        return false;

    }
}