import React from "react";
import {useSelector, useDispatch} from 'react-redux'
import { buy_choco } from "../redux/Index";

const CocoContainer = () => {

    const numOfChoco = useSelector(state => state.numOfCoco)

    console.log(numOfChocos);

    const dispatch = useDispatch()

    return(
        <div>
            <h1>NumOfCocos:{numOfchocos}</h1>
            <button onClick={() => dispatch(buy_coco())}>Cake Decrement</button>
        </div>
    )
}

export default ChocoContainer