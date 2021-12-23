import axios from 'axios';
import React, { useState, useEffect } from 'react'

function main() {
    const [fetch, setFetch] = useState(false)
    const [data, setData] = useState()

    useEffect(() => {
        const obj = axios.get('/api/that/returns/json').
            then((response) => response.json).
            then(data => {
                return {
                    id: data.id,
                    text: data.text
                }
            })
        setData(obj)
        setFetch(false)
    }, [fetch])

    return (
        <>
            <input type="number" placeholder="fetchDataByNumber" />
            <button onClick={setFetch(true)}>Fetch</button>
            {data.map(() => {
                return (
                    <div>
                        <h1>
                            "id":data.id
                        </h1>
                        <h1>"text":data.text</h1>
                    </div>
                )
            })}


        data
        </>
    )
}