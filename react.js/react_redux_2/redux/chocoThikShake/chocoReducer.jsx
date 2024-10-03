import { BUY_CHOCO } from "./chocoConstant";

const initialState = {
    numOfChoco:20
}

export const ChocoReducer = (state = initialState, action) => {
    switch (action.type) {
        case BUY_CHOCO: return{
            ...state,
            numOfChoco:state.numOfChoco - 1
        }
        default:return state
    }
}