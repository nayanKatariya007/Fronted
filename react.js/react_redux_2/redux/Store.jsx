import {createStore} from "redux";
import { CakeReducer } from "./cake/CakeReducer";
import { ChocoReducer } from "./cocoThikShake/CocoReducer";

const Store = createStore(CakeReducer, ChocoReducer)

export default Store