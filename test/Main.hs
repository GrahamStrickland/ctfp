module Main (main) where

import Ch01Test (ch01Tests)
import Test.HUnit

main :: IO ()
main = do
    putStrLn "Running CTFP Test Suite..."
    testCounts <-
        runTestTT $
            TestList
                [ch01Tests]
    putStrLn $ "Tests completed: " ++ show testCounts
    return ()
