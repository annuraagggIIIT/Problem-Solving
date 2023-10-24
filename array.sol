#14
// SPDX-License-Identifier: MIT
pragma solidity ^0.8.0;

contract ArrayUtils {
    function findMaxMin(uint[] memory arr) external pure returns (uint, uint) {
        require(arr.length > 0, "Array must not be empty");

        uint maximum = arr[0];
        uint minimum = arr[0];

        for (uint i = 1; i < arr.length; i++) {
            if (arr[i] > maximum) {
                maximum = arr[i];
            }

            if (arr[i] < minimum) {
                minimum = arr[i];
            }
        }

        return (maximum, minimum);
    }
}
