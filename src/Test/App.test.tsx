import { render, screen } from "@testing-library/react";
import App from "../App";

const sum = (x: number, y:number) => {
    return x + y
}

describe("App Component", () => {
    // Jest
    it("should sum correctly", () => {
        expect(sum(1, 2)).toBe(3)
    });

    // React Testing Library
    it("should render App with hello message", () => {
        render(<App />)
        screen.getByText("Hello World!")
    })
})  
    
export default {};