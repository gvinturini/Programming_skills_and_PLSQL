/*INSERT into students (name, value) VALUES ('Julia', 81);
INSERT into students (name, value) VALUES ('Carol', 68);
INSERT into students (name, value) VALUES ('Maria', 99);
INSERT into students (name, value) VALUES ('Andreia', 78);
INSERT into students (name, value) VALUES ('Jaqueline', 63);
INSERT into students (name, value) VALUES ('Marcela', 88);

SELECT * FROM students;
SELECT * from notes;

INSERT into notes (min_value, max_value) VALUES (0, 9);
INSERT into notes (min_value, max_value) VALUES (10, 19);
INSERT into notes (min_value, max_value) VALUES (20, 29);
INSERT into notes (min_value, max_value) VALUES (30, 39);
INSERT into notes (min_value, max_value) VALUES (40, 49);
INSERT into notes (min_value, max_value) VALUES (50, 59);
INSERT into notes (min_value, max_value) VALUES (60, 69);
INSERT into notes (min_value, max_value) VALUES (70, 79);
INSERT into notes (min_value, max_value) VALUES (80, 89);
INSERT into notes (min_value, max_value) VALUES (90, 100);
*/

SELECT DISTINCT
CASE
	when notes.grade < 8 then NULL
    else students.name
end AS name,
notes.grade, students.value
FROM (students INNER JOIN notes on students.value > notes.min_value AND students.value < notes.max_value)
ORDER by grade desc, 
(CASE
 	when notes.grade >= 8 then students.name
 	when notes.grade < 8 then students.value
 end);
