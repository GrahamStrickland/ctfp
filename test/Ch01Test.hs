module Ch01Test where

import qualified Ch01.ID as ID
import Test.HUnit

ch01Tests :: Test
ch01Tests =
    TestLabel "Chapter 1 Tests" $
        TestList
            [testCh01ID]

testCh01ID :: Test
testCh01ID =
    TestLabel "Ch01.ID tests" $
        TestList
            [ TestCase $ assertEqual "Test ID.id replicate 1 2" [2] (ID.id replicate 1 2)
            , TestCase $ assertEqual "Test ID.id take 3 (repeat \"pig\")" ["pig", "pig", "pig"] (ID.id take 3 (repeat "pig"))
            ]
