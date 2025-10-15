class Solution {
    public int[] asteroidCollision(int[] asteroids) {

        Stack<Integer> stk = new Stack();

        for (int asteroid : asteroids) {
            boolean alive = true;
            while (!stk.isEmpty() && alive && isNegative(asteroid) && !isNegative(stk.peek())) {

                int lastAsteroid = stk.peek();
                int currentAsteroid = Math.abs(asteroid);
                if (lastAsteroid == currentAsteroid) {
                    stk.pop();
                    alive = false;
                } else if (lastAsteroid > currentAsteroid) {
                    alive = false;
                } else {
                    stk.pop();
                }
            }

            if (alive)
                stk.push(asteroid);

        }

        int size = stk.size();
        int[] ans = new int[size];

        for (int i = stk.size() - 1; i >= 0; i--) {
            ans[i] = stk.pop();
        }

        return ans;
    }

    private boolean isNegative(int x) {
        return x < 0;
    }
}
